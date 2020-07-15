% reads in 'combined.csv' with 100 days of data from
% all sites. 
% (1) generates an individual plot (right now boxplot) 
% for EACH SITE and outputs it to 'SAVE_DIR/[site-name].png'
% (2) generates an individual boxplot for EACH DAY and outputs it to 
% 'SAVE_DIR/[date].png'

MY_DIR = 'RF_Comparison/June_July/'; 
SAVE_DIR = [MY_DIR 'DateBoxplots/']; 
if ~isfolder(MY_DIR)
    perror = sprintf('Error: Folder does not exist.\n');
    uiwait(warndlg(perror)); 
    MY_DIR = uigetdir(); 
    if MY_DIR == 0
        return;
    end   
end

if ~exist(SAVE_DIR)
    mkdir(SAVE_DIR)
end 

filepattern = dir(fullfile(MY_DIR, 'combined*.csv')); 
filename = [MY_DIR filepattern(1).name];
T2 = readtable(filename); 

size_t = size(T2); 

dir = cell(size_t(1), 1); 
dates = cell(size_t(1), 1);

ind1 = strfind(filename, 'd');
ind2 = strfind(filename, '.');

for i = 1:size_t(1)
    dir{i} = SAVE_DIR;
    dates{i} = filename(ind1+1:ind2-1); 
end

arr = datetime(T2.Timestamp, 'InputFormat', 'MMM d y h:mma'); 
arr.Format = 'MM-dd-yy';
T2.Date = datetime(cellstr(arr), 'Format', 'MM-dd-yy'); 
T3 = sortrows(T2, 'Date'); 

J = findgroups(T2.Site);
% splitapply(@myplotSite, T2.Frequency, T2.Delta, T2.Site, dir, dates, J);
K = findgroups(T2.Date); 
splitapply(@myplotDate, T2.Frequency, T2.Delta, dir, T2.Date, K); 

% boxplots by site
function myplotSite(x, y, z, DIR, DATES)
    f = figure('visible', 'off');
    boxplot(y, x);
    hold on
    xlabel('Frequency (MHz)');
    ylabel('Delta (dBm)');
    site = char(z{1}); 
    titl = ['Delta for Site ' site ' - ' DATES{1}];
    title(titl, 'Interpreter', 'none');
    name = [DIR{1} site '.png'];
    fprintf('Saving %s\n', name); 
    saveas(f, name); 
end

% boxplots by date
function myplotDate(x, y, DIR, z)
    f = figure('visible', 'off');
    boxplot(y, x);
    hold on
    xlabel('Frequency (MHz)');
    ylabel('Delta (dBm)');
    date = char(z(1)); 
    titl = ['Delta for Date ' date];
    title(titl, 'Interpreter', 'none');
    name = [DIR{1} date '.png'];
    fprintf('Saving %s\n', name); 
    saveas(f, name); 
end 



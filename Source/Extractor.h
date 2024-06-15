// Extractor.h was made by @LillieH1000 from https://www.github.com/LillieH1000/YouTube-Reborn

#import <Foundation/Foundation.h>

@interface YouTubeExtractor : NSObject
+ (NSDictionary *)youtubePlayerRequest :(NSString *)clientId :(NSString *)videoId;
@end

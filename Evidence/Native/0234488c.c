/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_NowSec
int64_t Dino_BusSand_App_Meta_PassportFeature__get_NowSec (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PassportFeature$$get_NowSec
   int64_t Dino_BusSand_App_Meta_PassportFeature__get_NowSec (const MethodInfo* method); */

long Dino_BusSand_App_Meta_PassportFeature__get_NowSec_224488c(void)

{
  long lVar1;
  
  lVar1 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  return lVar1 / 1000;
}


/* IL2CPP: Dino.BusSand.App.CheatFlags$$Usable
int64_t Dino_BusSand_App_CheatFlags__Usable (int64_t realCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CheatFlags$$Usable
   int64_t Dino_BusSand_App_CheatFlags__Usable (int64_t realCount, const MethodInfo* method); */

long Dino_BusSand_App_CheatFlags__Usable_214f578(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04cab380;
  if ((bRam0000000004f9b7b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    bRam0000000004f9b7b6 = 1;
  }
                    /* try { // try from 0224f5ac to 0234f5b3 has its CatchHandler @ 0224f72c */
  if (**(char **)(*(long *)puVar1 + 0xb8) != '\0' && param_1 < 1) {
    param_1 = 1;
  }
                    /* try { // try from 0224f5cc to 0234f5cf has its CatchHandler @ 0224f730 */
  return param_1;
}


/* IL2CPP: Dino.BusSand.App.Ads$$get_SessionNow
float Dino_BusSand_App_Ads__get_SessionNow (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$get_SessionNow
   float Dino_BusSand_App_Ads__get_SessionNow (const MethodInfo* method); */

float Dino_BusSand_App_Ads__get_SessionNow_2175fd8(void)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04cabaa8;
                    /* try { // try from 02275ff4 to 02376017 has its CatchHandler @ 02275ff4
                       catch() { ... } // from try @ 02275ff4 with catch @ 02275ff4
                       catch() { ... } // from try @ 02276020 with catch @ 02275ff4 */
  if ((bRam0000000004f9b8da & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
    bRam0000000004f9b8da = 1;
  }
  fVar3 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
  lVar2 = *(long *)puVar1;
                    /* try { // try from 02276018 to 0237601f has its CatchHandler @ 02276030 */
                    /* try { // try from 02276020 to 0237604b has its CatchHandler @ 02275ff4 */
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
                    /* catch() { ... } // from try @ 02276018 with catch @ 02276030 */
  return fVar3 + *(float *)(*(long *)(lVar2 + 0xb8) + 0x24);
}


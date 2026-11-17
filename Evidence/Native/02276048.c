/* IL2CPP: Dino.BusSand.App.Ads$$get_SessionSeconds
int32_t Dino_BusSand_App_Ads__get_SessionSeconds (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$get_SessionSeconds
   int32_t Dino_BusSand_App_Ads__get_SessionSeconds (const MethodInfo* method); */

int Dino_BusSand_App_Ads__get_SessionSeconds_2176048(void)

{
  int iVar1;
  undefined *puVar2;
  float fVar3;
  
  puVar2 = PTR_DAT_04cabaa8;
                    /* try { // try from 0227604c to 0237606f has its CatchHandler @ 0227604c
                       catch() { ... } // from try @ 0227604c with catch @ 0227604c
                       catch() { ... } // from try @ 02276078 with catch @ 0227604c */
  if ((bRam0000000004f9b8db & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
                    /* try { // try from 02276070 to 02376077 has its CatchHandler @ 0227609c */
    bRam0000000004f9b8db = 1;
  }
                    /* try { // try from 02276078 to 023760b7 has its CatchHandler @ 0227604c */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  fVar3 = (float)Dino_BusSand_App_Ads__get_SessionNow_2175fd8();
                    /* catch() { ... } // from try @ 02276070 with catch @ 0227609c */
  fVar3 = fVar3 - *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0xc);
  iVar1 = -0x80000000;
  if (fVar3 != INFINITY) {
    iVar1 = (int)fVar3;
  }
  return iVar1;
}


/* IL2CPP: Dino.BusSand.App.Ads$$OnLevelEnter
void Dino_BusSand_App_Ads__OnLevelEnter (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads$$OnLevelEnter
   void Dino_BusSand_App_Ads__OnLevelEnter (const MethodInfo* method); */

void Dino_BusSand_App_Ads__OnLevelEnter_216fecc(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabaa8;
  if ((bRam0000000004f9b8d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
                    /* try { // try from 0226fef4 to 0236ff03 has its CatchHandler @ 0226ffac */
    bRam0000000004f9b8d8 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  *(int *)(*(long *)(lVar2 + 0xb8) + 0x14) = *(int *)(*(long *)(lVar2 + 0xb8) + 0x14) + 1;
                    /* try { // try from 0226ff24 to 0236ff2b has its CatchHandler @ 0226ffa8 */
  return;
}


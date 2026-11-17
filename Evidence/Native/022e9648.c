/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnDestroy
void Dino_BusSand_App_UI_YachtRacingHallButton__OnDestroy (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton$$OnDestroy
   void Dino_BusSand_App_UI_YachtRacingHallButton__OnDestroy
   (Dino_BusSand_App_UI_YachtRacingHallButton_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingHallButton__OnDestroy_21e9648(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_04cb0f30;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 022e966c to 023e9703 has its CatchHandler @ 022e966c
                       catch() { ... } // from try @ 022e966c with catch @ 022e966c
                       catch() { ... } // from try @ 022e970c with catch @ 022e966c */
  if ((bRam0000000004f9bbe2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb0f30);
    bRam0000000004f9bbe2 = 1;
  }
  Dino_BusSand_App_UI_YachtRacingHallButton__Detach_21e8a04(param_1);
  uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,param_1,0);
  if ((uVar3 & 1) != 0) {
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0xc & 0x3f),
                   (*(ulong *)(*(long *)puVar2 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}


/* IL2CPP: Dino.BusSand.View.GameView$$StartFever
void Dino_BusSand_View_GameView__StartFever (Dino_BusSand_View_GameView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$StartFever
   void Dino_BusSand_View_GameView__StartFever (Dino_BusSand_View_GameView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GameView__StartFever_23a9314(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  
  if ((bRam0000000004f9c93c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c93c = 1;
  }
  fVar5 = *(float *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x70) = 0x40c00000;
  if (fVar5 <= 0.0) {
                    /* try { // try from 024a936c to 025a959b has its CatchHandler @ 024a936c
                       catch() { ... } // from try @ 024a936c with catch @ 024a936c
                       catch() { ... } // from try @ 024aa9e0 with catch @ 024a936c
                       catch() { ... } // from try @ 024aac20 with catch @ 024a936c
                       catch() { ... } // from try @ 024aacd4 with catch @ 024a936c
                       catch() { ... } // from try @ 024aacfc with catch @ 024a936c */
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x60) = 0x3fc00000;
    }
    puVar1 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__Sparkle_2382d28(**(long **)(lVar3 + 0xb8),0);
    }
    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(4);
    lVar3 = *(long *)(param_1 + 0x68);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x024a944c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),1,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}


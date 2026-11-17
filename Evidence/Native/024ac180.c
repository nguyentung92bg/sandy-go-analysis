/* IL2CPP: Dino.BusSand.View.GameView.<CrackleLater>d__250$$MoveNext
bool Dino_BusSand_View_GameView__CrackleLater_d__250__MoveNext (Dino_BusSand_View_GameView__CrackleLater_d__250_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView.<CrackleLater>d__250$$MoveNext
   bool Dino_BusSand_View_GameView__CrackleLater_d__250__MoveNext
   (Dino_BusSand_View_GameView__CrackleLater_d__250_o* __this, const MethodInfo* method); */

bool Dino_BusSand_View_GameView__CrackleLater_d__250__MoveNext_23ac180(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  
  if ((bRam0000000004f9c960 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04caaa78);
    bRam0000000004f9c960 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x20);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar5 == 0) {
LAB_024ac2d8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    uVar4 = *(undefined8 *)PTR_DAT_04caaa78;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar5 + 0x248);
    uVar4 = thunk_FUN_0216e89c(uVar4);
    UnityEngine_WaitForSeconds___ctor_43ca4f4(uVar6,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04cad568;
    if (lVar5 == 0) goto LAB_024ac2d8;
    if (*(int *)(param_1 + 0x38) == *(int *)(lVar5 + 0x248)) {
      if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar2;
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (lVar3 != 0) {
        Dino_BusSand_View_GameView__PanOf_23a7184
                  (*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                   *(undefined4 *)(param_1 + 0x34),lVar5,0);
        Dino_BusSand_GameAudio__Crackle_2384520(lVar3,0);
      }
    }
  }
                    /* try { // try from 024ac2d0 to 025ac393 has its CatchHandler @ 024ac2d0
                       catch() { ... } // from try @ 024ac2d0 with catch @ 024ac2d0
                       catch() { ... } // from try @ 024ac3a8 with catch @ 024ac2d0
                       catch() { ... } // from try @ 024ac3e8 with catch @ 024ac2d0
                       catch() { ... } // from try @ 024ac420 with catch @ 024ac2d0 */
  return iVar1 == 0;
}


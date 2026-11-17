/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<>c__DisplayClass20_0$$<BuildChestStrip>b__0
void Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_0___BuildChestStrip_b__0 (Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<>c__DisplayClass20_0$$<BuildChestStrip>b__0
   void Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_0___BuildChestStrip_b__0
   (Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_0_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_WinPanel___c__DisplayClass20_0___BuildChestStrip_b__0_2314768
                (long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  puVar2 = PTR_DAT_04cb83b0;
                    /* try { // try from 0241477c to 02514783 has its CatchHandler @ 024147c8 */
  if ((bRam0000000004f9c564 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
                    /* try { // try from 0241479c to 025147bb has its CatchHandler @ 024147cc */
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 024147bc to 025147eb has its CatchHandler @ 024146c4 */
    FUN_02132f7c(PTR_DAT_04cac1e8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0241477c with catch @ 024147c8
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0241479c with catch @ 024147cc
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02414744 with catch @ 024147d0
                        */
    FUN_02132f7c(PTR_DAT_04cb83b8);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02414718 with catch @ 024147d4
                        */
    FUN_02132f7c(PTR_DAT_04cb83c0);
    FUN_02132f7c(PTR_DAT_04cb83b0);
                    /* try { // try from 024147ec to 02514803 has its CatchHandler @ 02414858 */
    bRam0000000004f9c564 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 02414804 to 02514847 has its CatchHandler @ 024146c4 */
  System_Object___ctor_4870e5c(lVar3,0);
  puVar2 = PTR_DAT_04ca9ae8;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = param_1;
    thunk_FUN_02134474((long *)(lVar3 + 0x18),param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
                    /* try { // try from 02414848 to 02514857 has its CatchHandler @ 02414858 */
    if ((uVar4 & 1) != 0) {
                    /* catch() { ... } // from try @ 024147ec with catch @ 02414858
                       catch() { ... } // from try @ 02414848 with catch @ 02414858 */
      return uVar4;
    }
                    /* try { // try from 0241485c to 0251485f has its CatchHandler @ 02414868 */
                    /* try { // try from 02414860 to 0251486b has its CatchHandler @ 024146c4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0241485c with catch @ 02414868
                        */
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x10),0),
       lVar5 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar5,1,0);
      puVar2 = PTR_DAT_04cad568;
      uVar6 = NEON_scvtf(CONCAT44(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c)),4
                        );
      fVar7 = ((float)uVar6 * *(float *)(param_1 + 0x18)) / (float)*(int *)(param_1 + 0x20);
      fVar8 = ((float)((ulong)uVar6 >> 0x20) * *(float *)(param_1 + 0x18)) /
              (float)*(int *)(param_1 + 0x20);
      uVar4 = CONCAT44(fVar8,fVar7);
      iVar1 = *(int *)(*(long *)PTR_DAT_04cad568 + 0xe4);
      *(ulong *)(lVar3 + 0x10) =
           uVar4 ^ (uVar4 ^ 0x4248000042480000) &
                   CONCAT44(-(uint)(fVar8 < 50.0),-(uint)(fVar7 < 50.0));
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Fill_238370c
                  ((float)*(int *)(param_1 + 0x24) / (float)*(int *)(param_1 + 0x20),
                   **(long **)(lVar5 + 0xb8),0);
      }
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
      System_Action_float____ctor_35f1448(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cb83c0,0);
      if (*(int *)(*(long *)PTR_DAT_04cac1e8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar3 = Dino_BusSand_App_Tween__Value_2160f64(_UNK_00e203f4,uVar6,0);
      if (((lVar3 != 0) && (lVar3 = Dino_BusSand_App_Tween__SetEase_2160eb0(lVar3,5,0), lVar3 != 0))
         && (lVar3 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar3,1,0), lVar3 != 0)) {
        uVar4 = Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar3,*(undefined8 *)(param_1 + 0x28),0);
        lVar3 = *(long *)(param_1 + 0x40);
        if (lVar3 == 0) {
          lVar3 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
                    /* try { // try from 024149d0 to 02514a23 has its CatchHandler @ 024149d0
                       catch() { ... } // from try @ 024149d0 with catch @ 024149d0
                       catch() { ... } // from try @ 02414af0 with catch @ 024149d0
                       catch() { ... } // from try @ 02414b34 with catch @ 024149d0
                       catch() { ... } // from try @ 02414b98 with catch @ 024149d0 */
          System_Action___ctor_47b5ed0(lVar3,param_1,*(undefined8 *)PTR_DAT_04cb83b8,0);
          *(long *)(param_1 + 0x40) = lVar3;
          thunk_FUN_02134474((long *)(param_1 + 0x40),lVar3);
        }
        if (uVar4 != 0) {
          *(long *)(uVar4 + 0x40) = lVar3;
          thunk_FUN_02134474((long *)(uVar4 + 0x40),lVar3,0);
          return uVar4;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton.<>c__DisplayClass20_0$$<Fresh>b__2
void Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0___Fresh_b__2 (Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleHallButton.<>c__DisplayClass20_0$$<Fresh>b__2
   void Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0___Fresh_b__2
   (Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BattleRoyaleHallButton___c__DisplayClass20_0___Fresh_b__2_218c3d0
               (long param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_04ca9d18;
                    /* try { // try from 0228c3d4 to 0238c3e7 has its CatchHandler @ 0228c8ec */
  if ((bRam0000000004f9b986 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cadcc8);
    bRam0000000004f9b986 = 1;
  }
  lVar7 = *(long *)puVar2;
  lVar6 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar7 + 0x38);
  if (lVar5 == 0) {
                    /* try { // try from 0228c420 to 0238c427 has its CatchHandler @ 0228c8cc */
    FUN_0216b4cc(lVar7);
                    /* try { // try from 0228c428 to 0238c497 has its CatchHandler @ 0228c1a0 */
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0216b470();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cadcc8;
  lVar5 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0216b470();
  }
  lVar5 = Dino_BusSand_App_UI_BattleRoyaleUi__L_219a060
                    (*(undefined8 *)puVar2,**(undefined8 **)(lVar5 + 0xb8),0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9b980 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cadcf0);
    bRam0000000004f9b980 = 1;
  }
  Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*(undefined8 *)(lVar6 + 0x40),0,0);
  Dino_BusSand_App_UI_BattleRoyaleUi__SetActive_219a5e8(*(undefined8 *)(lVar6 + 0x38),1,0);
  if (lVar5 == 0) {
    return;
  }
  uVar8 = *(undefined8 *)(lVar6 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
  lVar7 = 0;
  if ((uVar3 & 1) != 0) {
    if (*(long *)(lVar6 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar7 = UnityEngine_Transform__Find_43d4bec
                      (*(long *)(lVar6 + 0x38),*(undefined8 *)PTR_DAT_04cadcf0,0);
  }
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b9f8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cada48,lVar5,0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b9f8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
  if ((uVar3 & 1) == 0) {
    if ((lVar7 == 0) ||
       (lVar6 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                          (lVar7,1,*(undefined8 *)PTR_DAT_04cada48), lVar6 == 0)) {
LAB_0229a1f0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        if (uVar1 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar4 = *(long **)(lVar6 + 0x20 + lVar7 * 8);
        if (plVar4 == (long *)0x0) goto LAB_0229a1f0;
        (**(code **)(*plVar4 + 0x518))(plVar4,lVar5,*(undefined8 *)(*plVar4 + 0x520));
        uVar1 = *(uint *)(lVar6 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
  }
  return;
}


/* IL2CPP: Dino.BusSand.App.UI.RewardPopup$$OnClaim
void Dino_BusSand_App_UI_RewardPopup__OnClaim (Dino_BusSand_App_UI_RewardPopup_o* __this, int32_t times, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.RewardPopup$$OnClaim
   void Dino_BusSand_App_UI_RewardPopup__OnClaim (Dino_BusSand_App_UI_RewardPopup_o* __this, int32_t
   times, const MethodInfo* method); */

void Dino_BusSand_App_UI_RewardPopup__OnClaim_2324fb8(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
                    /* try { // try from 02424fc8 to 02524fcb has its CatchHandler @ 02424fe4 */
                    /* try { // try from 02424fcc to 02524fe7 has its CatchHandler @ 02424b94 */
  if ((((*(char *)((long)param_1 + 0x42) == '\0') || ((char)param_1[8] != '\0')) ||
      (*(char *)((long)param_1 + 0x41) != '\0')) || (*(char *)((long)param_1 + 0x2c) != '\0')) {
    return;
  }
  *(undefined1 *)((long)param_1 + 0x41) = 1;
  puVar1 = PTR_DAT_04cb8c80;
                    /* catch() { ... } // from try @ 02424fc8 with catch @ 02424fe4 */
  if ((bRam0000000004f9c5db & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04caece0);
    FUN_02132f7c(PTR_DAT_04caece8);
    FUN_02132f7c(PTR_DAT_04caecf0);
    FUN_02132f7c(PTR_DAT_04cadd90);
    FUN_02132f7c(PTR_DAT_04cadd98);
    FUN_02132f7c(PTR_DAT_04caed00);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cac1e8);
    FUN_02132f7c(PTR_DAT_04cb8c88);
    FUN_02132f7c(PTR_DAT_04cb8c80);
    bRam0000000004f9c5db = 1;
  }
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_78 = 0;
  uStack_80 = 0;
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar7,0);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x10) = (long)param_1;
    thunk_FUN_02134474((long *)(lVar7 + 0x10),param_1);
    lVar8 = (**(code **)(*param_1 + 0x1c8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1d0));
    plVar11 = (long *)(lVar7 + 0x18);
    *plVar11 = lVar8;
    thunk_FUN_02134474(plVar11,lVar8);
    puVar6 = PTR_DAT_04cb8c88;
    puVar5 = PTR_DAT_04caece8;
    puVar4 = PTR_DAT_04caece0;
    puVar3 = PTR_DAT_04cac1e8;
    puVar2 = PTR_DAT_04caa458;
    puVar1 = PTR_DAT_04ca9ae8;
    if (*plVar11 != 0) {
      System_Collections_Generic_List_KeyValuePair_int__long____GetEnumerator_3966258
                (&uStack_90,*plVar11,*(undefined8 *)PTR_DAT_04caed00);
      lVar8 = 0;
      while (uVar9 = System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____MoveNext_35b53dc
                               (&uStack_90,*(undefined8 *)puVar5), (uVar9 & 1) != 0) {
        lVar12 = lStack_78;
        if ((int)uStack_80 != 0x3e9) {
          lVar12 = 0;
        }
        lVar8 = lVar12 + lVar8;
      }
      System_Collections_Generic_List_Enumerator_KeyValuePair_int__long____Dispose_35b53d8
                (&uStack_90,*(undefined8 *)puVar4);
      lVar12 = param_1[7];
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
      if (((uVar9 & 1) != 0) && (0 < lVar8)) {
        if (param_1[7] == 0) goto LAB_02425288;
        Dino_BusSand_App_UI_KitTopBar__Hold_2283310(param_1[7],lVar8,0,0);
      }
      (**(code **)(*param_1 + 0x1f8))
                (param_1,*(undefined8 *)(lVar7 + 0x18),param_2,*(undefined8 *)(*param_1 + 0x200));
      uVar13 = 0x3f400000;
      if (param_2 < 2) {
        uVar13 = _UNK_00e20328;
      }
      uVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Action___ctor_47b5ed0(uVar10,lVar7,*(undefined8 *)puVar6,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar7 = Dino_BusSand_App_Tween__Delayed_2161264(uVar13,uVar10,0);
      if ((lVar7 != 0) &&
         (lVar7 = Dino_BusSand_App_Tween__SetUnscaled_2160eb8(lVar7,1,0), lVar7 != 0)) {
        Dino_BusSand_App_Tween__SetOwner_2160ec0(lVar7,param_1,0);
        return;
      }
    }
  }
LAB_02425288:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


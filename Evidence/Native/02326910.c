/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$CollectHallCommands
void Dino_BusSand_App_Meta_BattleRoyaleFeature__CollectHallCommands (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool fromGame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature$$CollectHallCommands
   void Dino_BusSand_App_Meta_BattleRoyaleFeature__CollectHallCommands
   (Dino_BusSand_App_Meta_BattleRoyaleFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool
   fromGame, const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature__CollectHallCommands_2226910
               (undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* try { // try from 02326910 to 02426a43 has its CatchHandler @ 02326910
                       catch() { ... } // from try @ 02326910 with catch @ 02326910
                       catch() { ... } // from try @ 02326afc with catch @ 02326910
                       catch() { ... } // from try @ 02326bcc with catch @ 02326910
                       catch() { ... } // from try @ 02326c28 with catch @ 02326910 */
  if ((bRam0000000004f9bde2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2ca8);
    FUN_02132f7c(PTR_DAT_04cb2cb0);
    FUN_02132f7c(PTR_DAT_04cb2cb8);
    FUN_02132f7c(PTR_DAT_04cb2cc0);
    FUN_02132f7c(PTR_DAT_04cb2ca0);
    FUN_02132f7c(PTR_DAT_04cb2cc8);
    FUN_02132f7c(PTR_DAT_04cb2cd0);
    FUN_02132f7c(PTR_DAT_04cb2cd8);
    bRam0000000004f9bde2 = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_BattleRoyaleFeature__get_Core_22262b8(param_1);
  puVar3 = PTR_DAT_04cb2cb8;
  if (lVar5 != 0) {
    Dino_BusSand_App_Meta_BattleRoyaleCore__RefreshTime_2221ee0();
    uVar6 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
    if (((((uVar6 & 1) != 0) &&
         (uVar6 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(4,0), (param_3 & 1) != 0)) &&
        ((uVar6 & 1) == 0)) &&
       (uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__HaveValidGroup_2220f34(lVar5),
       (uVar6 & 1) != 0)) {
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Func_object____ctor_379de3c(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb2ca8,0);
      if (param_2 == 0) goto LAB_02326b8c;
      Dino_BusSand_App_Meta_HallQueue__Add_222ca74
                (param_2,0xc,*(undefined8 *)PTR_DAT_04cb2cd0,uVar7,0);
    }
    uVar6 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(4,0);
                    /* try { // try from 02326a44 to 02426a6b has its CatchHandler @ 02326bf0 */
    if ((uVar6 & 1) != 0) {
      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_02326b8c;
      if ((*(int *)(*(long *)(lVar5 + 0x10) + 0x10) == 2) &&
         (uVar6 = Dino_BusSand_App_Meta_BattleRoyaleCore__NeedShowBattleResult_2221aa4(lVar5),
         puVar2 = PTR_DAT_04cb2ca0, (uVar6 & 1) != 0)) {
        lVar8 = *(long *)PTR_DAT_04cb2ca0;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        puVar10 = *(undefined8 **)(lVar8 + 0xb8);
        lVar11 = puVar10[2];
        uVar7 = *(undefined8 *)PTR_DAT_04cb2cd8;
        if (lVar11 == 0) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
                    /* try { // try from 02326aa8 to 02426ad3 has its CatchHandler @ 02326bec */
            puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
          }
          uVar12 = *puVar10;
          lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
          System_Func_object____ctor_379de3c(lVar11,uVar12,*(undefined8 *)PTR_DAT_04cb2cc0,0);
                    /* try { // try from 02326ae4 to 02426aef has its CatchHandler @ 02326bd8 */
          plVar9 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
          *plVar9 = lVar11;
          thunk_FUN_02134474(plVar9,lVar11);
        }
        if (param_2 == 0) goto LAB_02326b8c;
                    /* try { // try from 02326af0 to 02426afb has its CatchHandler @ 02326be4 */
                    /* try { // try from 02326afc to 02426bbf has its CatchHandler @ 02326910 */
        Dino_BusSand_App_Meta_HallQueue__Add_222ca74(param_2,3,uVar7,lVar11,0);
      }
    }
    Dino_BusSand_App_Meta_BattleRoyaleCore__TryAutoAddStartCommand_22240a0(lVar5);
    puVar2 = PTR_DAT_04cb2cb0;
    if (*(char *)(lVar5 + 0x30) == '\0') {
      return;
    }
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Func_object____ctor_379de3c(uVar7,param_1,*(undefined8 *)puVar2,0);
    if (param_2 != 0) {
      uVar12 = *(undefined8 *)PTR_DAT_04cb2cc8;
      if ((bRam0000000004f9bef9 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb2e70);
        FUN_02132f7c(PTR_DAT_04cb2e78);
        FUN_02132f7c(PTR_DAT_04cb2e80);
        FUN_02132f7c(PTR_DAT_04cb2e88);
        FUN_02132f7c(PTR_DAT_04cb2e90);
        bRam0000000004f9bef9 = 1;
      }
      puVar4 = PTR_DAT_04cb2e88;
      puVar2 = PTR_DAT_04cb2e78;
      puVar3 = PTR_DAT_04cb2e70;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      if (*(long *)(param_2 + 0x10) != 0) {
        System_Collections_Generic_List_HallQueue_Cmd___GetEnumerator_3b3e3ac
                  (&uStack_c0,*(long *)(param_2 + 0x10),*(undefined8 *)PTR_DAT_04cb2e90);
        uStack_70 = 0;
        puStack_68 = &uStack_c0;
        while (uVar6 = System_Collections_Generic_List_Enumerator_HallQueue_Cmd___MoveNext_3611124
                                 (&uStack_c0,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
          uVar6 = System_String__op_Equality_46d1108(uStack_a8,uVar12,0);
          if ((uVar6 & 1) != 0) {
            System_Collections_Generic_List_Enumerator_HallQueue_Cmd___Dispose_3611120
                      (&uStack_c0,*(undefined8 *)puVar3);
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_HallQueue_Cmd___Dispose_3611120
                  (&uStack_c0,*(undefined8 *)puVar3);
        lVar5 = *(long *)(param_2 + 0x10);
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_e0 = 0x41;
        uStack_d8 = uVar12;
        thunk_FUN_02134474((ulong)&uStack_e0 | 8,uVar12);
        uStack_d0 = uVar7;
        thunk_FUN_02134474(&uStack_d0,uVar7);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,*(int *)(param_2 + 0x18));
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
        if (lVar5 != 0) {
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar11 = *(long *)puVar4;
          uStack_88 = uStack_d8;
          uStack_90 = uStack_e0;
          uStack_78 = uStack_c8;
          uStack_80 = uStack_d0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              lVar8 = lVar8 + (long)(int)uVar1 * 0x20;
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + 0x28) = uStack_d8;
              *(undefined8 *)(lVar8 + 0x20) = uStack_e0;
              *(undefined8 *)(lVar8 + 0x38) = uStack_c8;
              *(undefined8 *)(lVar8 + 0x30) = uStack_d0;
              thunk_FUN_02134474(lVar8 + 0x28,0);
              return;
            }
            puStack_68 = (undefined8 *)uStack_d8;
            uStack_70 = uStack_e0;
            uStack_58 = uStack_c8;
            uStack_60 = uStack_d0;
            System_Collections_Generic_List_HallQueue_Cmd___AddWithResize_3b3d888
                      (lVar5,&uStack_70,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_02326b8c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


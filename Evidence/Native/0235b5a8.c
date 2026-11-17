/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$CollectHallCommands
void Dino_BusSand_App_Meta_YachtRacingFeature__CollectHallCommands (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool fromGame, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature$$CollectHallCommands
   void Dino_BusSand_App_Meta_YachtRacingFeature__CollectHallCommands
   (Dino_BusSand_App_Meta_YachtRacingFeature_o* __this, Dino_BusSand_App_Meta_HallQueue_o* q, bool
   fromGame, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingFeature__CollectHallCommands_225b5a8
               (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  
  if ((bRam0000000004f9c012 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2cb8);
                    /* try { // try from 0235b5d4 to 0245b5fb has its CatchHandler @ 0235b84c */
    FUN_02132f7c(PTR_DAT_04cb4128);
    FUN_02132f7c(PTR_DAT_04cb4130);
    FUN_02132f7c(PTR_DAT_04cb4138);
    FUN_02132f7c(PTR_DAT_04cb4140);
    FUN_02132f7c(PTR_DAT_04cb4148);
                    /* try { // try from 0235b610 to 0245b613 has its CatchHandler @ 0235b804 */
                    /* try { // try from 0235b614 to 0245b61b has its CatchHandler @ 0235b834 */
    FUN_02132f7c(PTR_DAT_04cb4150);
                    /* try { // try from 0235b61c to 0245b62b has its CatchHandler @ 0235b83c */
    bRam0000000004f9c012 = 1;
  }
  lVar5 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(param_1);
  puVar2 = PTR_DAT_04cb2cb8;
  if (lVar5 != 0) {
                    /* try { // try from 0235b638 to 0245b643 has its CatchHandler @ 0235b838 */
    Dino_BusSand_App_Meta_YachtRacingCore__TickSession_22563a4(lVar5,0);
                    /* try { // try from 0235b64c to 0245b66b has its CatchHandler @ 0235b830 */
    Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData_2255be0(lVar5,0);
    uVar6 = Dino_BusSand_App_Meta_SystemOpen__IsOpen_2243068(5,0);
                    /* try { // try from 0235b66c to 0245b677 has its CatchHandler @ 0235b808 */
                    /* try { // try from 0235b67c to 0245b68b has its CatchHandler @ 0235b82c */
    if ((((uVar6 & 1) != 0) &&
        (uVar6 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(5,0), (uVar6 & 1) == 0)) &&
       (uVar6 = Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData_2252fb8(lVar5,0),
       (uVar6 & 1) != 0)) {
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 0235b694 to 0245b69f has its CatchHandler @ 0235b828 */
      System_Func_object____ctor_379de3c(uVar7,param_1,*(undefined8 *)PTR_DAT_04cb4130,0);
                    /* try { // try from 0235b6a4 to 0245b6b3 has its CatchHandler @ 0235b824 */
      if (param_2 == 0) goto LAB_0235b784;
                    /* try { // try from 0235b6c0 to 0245b6cb has its CatchHandler @ 0235b820 */
      Dino_BusSand_App_Meta_HallQueue__Add_222ca74
                (param_2,0xc,*(undefined8 *)PTR_DAT_04cb4140,uVar7,0);
    }
    puVar3 = PTR_DAT_04cb4138;
                    /* try { // try from 0235b6cc to 0245b6db has its CatchHandler @ 0235b818 */
    if (*(char *)(lVar5 + 0x70) != '\0') {
      uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* try { // try from 0235b6e8 to 0245b6eb has its CatchHandler @ 0235b848 */
      System_Func_object____ctor_379de3c(uVar7,param_1,*(undefined8 *)puVar3,0);
      if (param_2 == 0) goto LAB_0235b784;
                    /* try { // try from 0235b704 to 0245b70f has its CatchHandler @ 0235b800 */
      Dino_BusSand_App_Meta_HallQueue__Add_222ca74
                (param_2,0x2d,*(undefined8 *)PTR_DAT_04cb4150,uVar7,0);
    }
    puVar3 = PTR_DAT_04cb4128;
                    /* try { // try from 0235b71c to 0245b72f has its CatchHandler @ 0235b7fc */
    if (*(int *)(lVar5 + 0x6c) == 0) {
                    /* try { // try from 0235b77c to 0245b7a3 has its CatchHandler @ 0235b910 */
      return;
    }
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Func_object____ctor_379de3c(uVar7,param_1,*(undefined8 *)puVar3,0);
    if (param_2 != 0) {
      uVar8 = *(undefined8 *)PTR_DAT_04cb4148;
      if ((bRam0000000004f9bef9 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb2e70);
        FUN_02132f7c(PTR_DAT_04cb2e78);
        FUN_02132f7c(PTR_DAT_04cb2e80);
        FUN_02132f7c(PTR_DAT_04cb2e88);
        FUN_02132f7c(PTR_DAT_04cb2e90);
        bRam0000000004f9bef9 = 1;
      }
      puVar4 = PTR_DAT_04cb2e88;
      puVar3 = PTR_DAT_04cb2e78;
      puVar2 = PTR_DAT_04cb2e70;
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
                                 (&uStack_c0,*(undefined8 *)puVar3), (uVar6 & 1) != 0) {
          uVar6 = System_String__op_Equality_46d1108(uStack_a8,uVar8,0);
          if ((uVar6 & 1) != 0) {
            System_Collections_Generic_List_Enumerator_HallQueue_Cmd___Dispose_3611120
                      (&uStack_c0,*(undefined8 *)puVar2);
            return;
          }
        }
        System_Collections_Generic_List_Enumerator_HallQueue_Cmd___Dispose_3611120
                  (&uStack_c0,*(undefined8 *)puVar2);
        lVar5 = *(long *)(param_2 + 0x10);
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_e0 = 0x32;
        uStack_d8 = uVar8;
        thunk_FUN_02134474((ulong)&uStack_e0 | 8,uVar8);
        uStack_d0 = uVar7;
        thunk_FUN_02134474(&uStack_d0,uVar7);
        uStack_c8 = CONCAT44(uStack_c8._4_4_,*(int *)(param_2 + 0x18));
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
        if (lVar5 != 0) {
          lVar9 = *(long *)(lVar5 + 0x10);
          lVar10 = *(long *)puVar4;
          uStack_88 = uStack_d8;
          uStack_90 = uStack_e0;
          uStack_78 = uStack_c8;
          uStack_80 = uStack_d0;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar1 * 0x20;
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + 0x28) = uStack_d8;
              *(undefined8 *)(lVar9 + 0x20) = uStack_e0;
              *(undefined8 *)(lVar9 + 0x38) = uStack_c8;
              *(undefined8 *)(lVar9 + 0x30) = uStack_d0;
              thunk_FUN_02134474(lVar9 + 0x28,0);
              return;
            }
            puStack_68 = (undefined8 *)uStack_d8;
            uStack_70 = uStack_e0;
            uStack_58 = uStack_c8;
            uStack_60 = uStack_d0;
            System_Collections_Generic_List_HallQueue_Cmd___AddWithResize_3b3d888
                      (lVar5,&uStack_70,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_0235b784:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$OnGiveUp
bool Dino_BusSand_App_Meta_ActivityContinueFeature__OnGiveUp (System_Action_int__o* revive, System_Action_o* decline, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$OnGiveUp
   bool Dino_BusSand_App_Meta_ActivityContinueFeature__OnGiveUp (System_Action_int__o* revive,
   System_Action_o* decline, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_ActivityContinueFeature__OnGiveUp_221e760
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  puVar2 = PTR_DAT_04cadaa0;
  if ((bRam0000000004f9bdb7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cadaa0);
    FUN_02132f7c(PTR_DAT_04cb2920);
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bdb7 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_Meta_ActivityContinueFeature__ContinueList_221e198();
  if (lVar3 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231e744 with catch @ 0231e7d8
                        */
    iVar1 = *(int *)(lVar3 + 0x18);
    if (iVar1 != 0) {
      lVar4 = *(long *)puVar2;
                    /* try { // try from 0231e7ec to 0241e7ef has its CatchHandler @ 0231e7fc */
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar4 = *(long *)puVar2;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231e7ec with catch @ 0231e7fc
                        */
      if ((**(char **)(lVar4 + 0xb8) != '\0') && (1 < *(int *)(lVar3 + 0x18))) {
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar4 = Dino_BusSand_App_Meta_ActivityContinueFeature__Influenced_221e450(lVar3);
        if (lVar4 == 0) goto LAB_0231e8cc;
        if (1 < *(int *)(lVar4 + 0x18)) {
          uVar5 = Dino_BusSand_App_UI_SimpleActivityContinuePanel__Open_2189a14
                            (lVar4,param_1,param_2,0);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
          if ((uVar6 & 1) != 0) {
            Dino_BusSand_App_UI_ContinueBottomPanel__OnCombinedOpened_22bf1b8(0);
            goto LAB_0231e8b4;
          }
        }
      }
      lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2920);
      Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence___ctor_221e8d0
                (lVar4,lVar3,param_1,param_2);
      if (lVar4 == 0) goto LAB_0231e8cc;
      Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence__Next_221e930(lVar4);
    }
LAB_0231e8b4:
                    /* try { // try from 0231e8c8 to 0241e8ff has its CatchHandler @ 0231e8c8
                       catch(type#1 @ 00000000) { ... } // from try @ 0231e8c8 with catch @ 0231e8c8
                        */
    return iVar1 != 0;
  }
LAB_0231e8cc:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


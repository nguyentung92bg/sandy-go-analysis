/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel.<StartFlow>d__16$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow_d__16__MoveNext (Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow_d__16_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.YachtRacingStartPanel.<StartFlow>d__16$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow_d__16__MoveNext
   (Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow_d__16_o* __this, const MethodInfo* method);
    */

undefined8
Dino_BusSand_App_UI_YachtRacingStartPanel__StartFlow_d__16__MoveNext_21f3b74
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((bRam0000000004f9bc32 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cadf40);
    FUN_02132f7c(PTR_DAT_04cb0890);
    FUN_02132f7c(PTR_DAT_04cae910);
    FUN_02132f7c(PTR_DAT_04cae058);
    FUN_02132f7c(PTR_DAT_04caca50);
    FUN_02132f7c(PTR_DAT_04cabaf0);
    FUN_02132f7c(PTR_DAT_04cb15c0);
    FUN_02132f7c(PTR_DAT_04caca60);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb15c8);
    FUN_02132f7c(PTR_DAT_04cb15d0);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb1528);
    FUN_02132f7c(PTR_DAT_04cae408);
    bRam0000000004f9bc32 = 1;
  }
  puVar2 = PTR_DAT_04cb15d0;
  iVar3 = *(int *)(param_4 + 0x10);
  lVar10 = *(long *)(param_4 + 0x20);
  if (iVar3 == 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 0) {
        return 0;
      }
                    /* try { // try from 022f3c74 to 023f3c9b has its CatchHandler @ 022f3c74
                       catch(type#1 @ 00000000) { ... } // from try @ 022f3c74 with catch @ 022f3c74
                       catch(type#1 @ 00000000) { ... } // from try @ 022f3cb4 with catch @ 022f3c74
                        */
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(uVar5,0);
                    /* try { // try from 022f3c9c to 023f3ca3 has its CatchHandler @ 022f3cd0 */
      *(undefined8 *)(param_4 + 0x30) = uVar5;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x30),uVar5);
                    /* try { // try from 022f3cac to 023f3cb3 has its CatchHandler @ 022f3ccc */
                    /* try { // try from 022f3cb4 to 023f3ce3 has its CatchHandler @ 022f3c74 */
      iVar3 = UnityEngine_Random__Range_43b64e8(0x14,0x19,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f3cac with catch @ 022f3ccc
                        */
      uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f3c9c with catch @ 022f3cd0
                        */
                    /* try { // try from 022f3ce4 to 023f3d3f has its CatchHandler @ 022f3ce4
                       catch(type#1 @ 00000000) { ... } // from try @ 022f3ce4 with catch @ 022f3ce4
                       catch(type#1 @ 00000000) { ... } // from try @ 022f3d58 with catch @ 022f3ce4
                        */
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0((float)iVar3 * _UNK_00e20754,uVar5,0);
      *(undefined8 *)(param_4 + 0x18) = uVar5;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar5);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar10 == 0) goto LAB_022f4014;
    if ((*(long *)(param_4 + 0x28) != 0) && (*(long *)(lVar10 + 0x40) != 0)) {
      Dino_BusSand_App_Meta_YachtRacingCore__GrantFirstReward_2257fc8
                (*(long *)(lVar10 + 0x40),*(long *)(param_4 + 0x28),0);
    }
                    /* try { // try from 022f3d40 to 023f3d47 has its CatchHandler @ 022f3d84 */
    Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar10,*(undefined8 *)PTR_DAT_04cae408,0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_022f3fc8;
                    /* try { // try from 022f3d50 to 023f3d57 has its CatchHandler @ 022f3d80 */
                    /* try { // try from 022f3d58 to 023f3d97 has its CatchHandler @ 022f3ce4 */
    lVar6 = UnityEngine_Component__GetComponent_object__26f97e8
                      (lVar10,*(undefined8 *)PTR_DAT_04cadf40);
    puVar2 = PTR_DAT_04ca9ae8;
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f3d50 with catch @ 022f3d80
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f3d40 with catch @ 022f3d84
                        */
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    if ((uVar7 & 1) != 0) {
                    /* try { // try from 022f3d98 to 023f3dc3 has its CatchHandler @ 022f3d98
                       catch(type#1 @ 00000000) { ... } // from try @ 022f3d98 with catch @ 022f3d98
                       catch(type#1 @ 00000000) { ... } // from try @ 022f3ddc with catch @ 022f3d98
                        */
      lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar10,0);
      if (lVar6 == 0) goto LAB_022f4014;
      lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c
                        (lVar6,*(undefined8 *)PTR_DAT_04cb0890);
    }
    if (lVar6 == 0) goto LAB_022f4014;
                    /* try { // try from 022f3dc4 to 023f3dcb has its CatchHandler @ 022f3dfc */
    UnityEngine_CanvasGroup__set_alpha_467ad3c(0,lVar6,0);
                    /* try { // try from 022f3dd4 to 023f3ddb has its CatchHandler @ 022f3df8 */
    UnityEngine_CanvasGroup__set_blocksRaycasts_467b03c(lVar6,0,0);
                    /* try { // try from 022f3ddc to 023f3e0f has its CatchHandler @ 022f3d98 */
    lVar6 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar10,*(undefined8 *)PTR_DAT_04cb1528);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f3dd4 with catch @ 022f3df8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f3dc4 with catch @ 022f3dfc
                        */
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar2);
    }
                    /* try { // try from 022f3e10 to 023f3e77 has its CatchHandler @ 022f3e10
                       catch(type#1 @ 00000000) { ... } // from try @ 022f3e10 with catch @ 022f3e10
                       catch(type#1 @ 00000000) { ... } // from try @ 022f3e90 with catch @ 022f3e10
                        */
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
    if ((uVar7 & 1) == 0) {
      lVar6 = UnityEngine_Component__get_transform_43bcd18(lVar10,0);
    }
    if (lVar6 == 0) goto LAB_022f4014;
    uVar11 = UnityEngine_Transform__get_position_43d0e48(lVar6,0);
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca60);
                    /* try { // try from 022f3e78 to 023f3e7f has its CatchHandler @ 022f3ebc */
    System_Collections_Generic_List_KeyValuePair_int__long_____ctor_3964fac
              (lVar6,*(undefined8 *)PTR_DAT_04caca50);
    puVar2 = PTR_DAT_04cb15c0;
    lVar8 = *(long *)(param_4 + 0x28);
    if (lVar8 == 0) goto LAB_022f4014;
                    /* try { // try from 022f3e88 to 023f3e8f has its CatchHandler @ 022f3eb8 */
                    /* try { // try from 022f3e90 to 023f3ecf has its CatchHandler @ 022f3e10 */
    if (1 < *(int *)(lVar8 + 0x18)) {
      uVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                        (lVar8,0,*(undefined8 *)PTR_DAT_04cb15c0);
      uVar4 = Dino_BusSand_App_MiniJson__Int_21562dc(uVar5,0,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f3e88 with catch @ 022f3eb8
                        */
      if (*(long *)(param_4 + 0x28) == 0) goto LAB_022f4014;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022f3e78 with catch @ 022f3ebc
                        */
      uVar5 = System_Collections_Generic_List_object___get_Item_3a81924
                        (*(long *)(param_4 + 0x28),1,*(undefined8 *)puVar2);
      uVar5 = Dino_BusSand_App_MiniJson__Long_2156378(uVar5,0,0);
      uStack_60 = 0;
      uStack_58 = 0;
      System_Collections_Generic_KeyValuePair_int__long____ctor_390da2c
                (&uStack_60,uVar4,uVar5,*(undefined8 *)PTR_DAT_04cae910);
      if (lVar6 == 0) goto LAB_022f4014;
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)PTR_DAT_04cae058;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_022f4014;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + 0x20) = uStack_60;
        *(undefined8 *)(lVar8 + 0x28) = uStack_58;
      }
      else {
        System_Collections_Generic_List_KeyValuePair_int__long____AddWithResize_3965844
                  (lVar6,uStack_60,uStack_58,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
    }
    puVar2 = PTR_DAT_04caa458;
    lVar8 = *(long *)(param_4 + 0x30);
    if (lVar8 == 0) goto LAB_022f4014;
                    /* catch() { ... } // from try @ 022f3fe4 with catch @ 022f3f6c */
    *(undefined1 *)(lVar8 + 0x10) = 0;
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Action___ctor_47b5ed0(uVar5,lVar8,*(undefined8 *)PTR_DAT_04cb15c8,0);
    Dino_BusSand_App_UI_CommerceRewardFly__Fly_22a8d24(uVar11,param_2,param_3,lVar6,uVar5,0,0);
  }
  if (*(long *)(param_4 + 0x30) != 0) {
    if (*(char *)(*(long *)(param_4 + 0x30) + 0x10) == '\0') {
      *(undefined8 *)(param_4 + 0x18) = 0;
                    /* try { // try from 022f3fe4 to 023f401b has its CatchHandler @ 022f3f6c */
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
      *(undefined4 *)(param_4 + 0x10) = 2;
      return 1;
    }
    if (lVar10 != 0) {
LAB_022f3fc8:
                    /* try { // try from 022f3fd0 to 023f3fe3 has its CatchHandler @ 022f3ffc */
      Dino_BusSand_App_UI_YachtRacingStartPanel__OpenRaceAndClose_21f3970(lVar10,0);
                    /* catch() { ... } // from try @ 022f3fd0 with catch @ 022f3ffc */
      return 0;
    }
  }
LAB_022f4014:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


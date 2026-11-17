/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$OnQuitTap
bool Dino_BusSand_App_Meta_ActivityContinueFeature__OnQuitTap (System_Action_o* quit, System_Action_o* stay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature$$OnQuitTap
   bool Dino_BusSand_App_Meta_ActivityContinueFeature__OnQuitTap (System_Action_o* quit,
   System_Action_o* stay, const MethodInfo* method); */

undefined4
Dino_BusSand_App_Meta_ActivityContinueFeature__OnQuitTap_221ee34
          (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* try { // try from 0231ee34 to 0241ee57 has its CatchHandler @ 0231ede4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ee24 with catch @ 0231ee50
                        */
  if ((bRam0000000004f9bdb8 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ee2c with catch @ 0231ee54
                        */
    FUN_02132f7c(PTR_DAT_04cadaa0);
                    /* try { // try from 0231ee64 to 0241ee67 has its CatchHandler @ 0231ee84 */
    FUN_02132f7c(PTR_DAT_04cb2940);
    FUN_02132f7c(PTR_DAT_04cada88);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ee64 with catch @ 0231ee84
                        */
    FUN_02132f7c(PTR_DAT_04cb2948);
                    /* try { // try from 0231ee94 to 0241ee97 has its CatchHandler @ 0231eeac */
    bRam0000000004f9bdb8 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (cRam0000000004f9b94d == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0231ee94 with catch @ 0231eeac
                        */
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  lVar6 = **(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  uVar5 = 0;
  if ((uVar3 & 1) != 0) {
    if (lVar6 == 0) goto LAB_0231efc4;
                    /* try { // try from 0231ef0c to 0241efeb has its CatchHandler @ 0231ef0c
                       catch(type#1 @ 00000000) { ... } // from try @ 0231ef0c with catch @ 0231ef0c
                       catch(type#1 @ 00000000) { ... } // from try @ 0231f088 with catch @ 0231ef0c
                        */
    uVar5 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                      (lVar6,*(undefined8 *)PTR_DAT_04cb2948);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  if (*(int *)(*(long *)PTR_DAT_04cadaa0 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar6 = Dino_BusSand_App_Meta_ActivityContinueFeature__QuitList_221e370();
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
      return 0;
    }
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb2940);
    Dino_BusSand_App_UI_ActivityQuitFlow___ctor_2187d88(lVar4,uVar5,lVar6,param_1,param_2,0);
    puVar1 = PTR_DAT_04ca9ae8;
    if (lVar4 != 0) {
      if ((bRam0000000004f9b966 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04caa458,0);
        FUN_02132f7c(PTR_DAT_04cada78);
        FUN_02132f7c(PTR_DAT_04cada80);
        FUN_02132f7c(PTR_DAT_04cada88);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        FUN_02132f7c(PTR_DAT_04cada90);
        FUN_02132f7c(PTR_DAT_04cad460);
        FUN_02132f7c(PTR_DAT_04cad948);
        bRam0000000004f9b966 = 1;
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x10);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
      if (((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x18) != 0)) &&
          (*(int *)(*(long *)(lVar4 + 0x18) + 0x18) != 0)) &&
         (uVar3 = Dino_BusSand_App_UI_ActivityQuitFlow__ShowNext_2188014(lVar4),
         puVar1 = PTR_DAT_04caa458, (uVar3 & 1) != 0)) {
        lVar6 = *(long *)(lVar4 + 0x10);
        uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar5,lVar4,*(undefined8 *)PTR_DAT_04cada78,0);
        puVar2 = PTR_DAT_04cad948;
        if (lVar6 != 0) {
          Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                    (lVar6,*(undefined8 *)PTR_DAT_04cada90,uVar5,1,*(undefined8 *)PTR_DAT_04cad948,0
                    );
          lVar6 = *(long *)(lVar4 + 0x10);
          uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          System_Action___ctor_47b5ed0(uVar5,lVar4,*(undefined8 *)PTR_DAT_04cada80,0);
          if (lVar6 != 0) {
            Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
                      (lVar6,*(undefined8 *)PTR_DAT_04cad460,uVar5,1,*(undefined8 *)puVar2,0);
            return 1;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      return 0;
    }
  }
LAB_0231efc4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


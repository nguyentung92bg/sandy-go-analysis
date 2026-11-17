/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Update
void Dino_BusSand_App_UI_UIManager__Update (Dino_BusSand_App_UI_UIManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIManager$$Update
   void Dino_BusSand_App_UI_UIManager__Update (Dino_BusSand_App_UI_UIManager_o* __this, const
   MethodInfo* method); */

long * Dino_BusSand_App_UI_UIManager__Update_21ff0c0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022ff00c with catch @ 022ff0c0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fee68 with catch @ 022ff0c4
                        */
  if ((bRam0000000004f9bc7d & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fefd0 with catch @ 022ff0e0
                        */
    FUN_02132f7c(PTR_DAT_04cab380);
    bRam0000000004f9bc7d = 1;
  }
  iVar2 = UnityEngine_Screen__get_width_436a6a0(0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fee58 with catch @ 022ff104
                       catch(type#1 @ 00000000) { ... } // from try @ 022fee80 with catch @ 022ff104
                        */
  if ((iVar2 != *(int *)(param_1 + 0x50)) ||
     (iVar2 = UnityEngine_Screen__get_height_436a6c8(0), iVar2 != *(int *)(param_1 + 0x54))) {
                    /* try { // try from 022ff118 to 023ff14f has its CatchHandler @ 022ff118
                       catch() { ... } // from try @ 022ff118 with catch @ 022ff118
                       catch() { ... } // from try @ 022ff44c with catch @ 022ff118 */
    Dino_BusSand_App_UI_UIManager__ApplyScaler_21fde64(param_1);
  }
  plVar3 = (long *)UnityEngine_Input__GetKeyDown_44302c8(0x1b,0);
  puVar1 = PTR_DAT_04cabb00;
  if ((((ulong)plVar3 & 1) == 0) ||
     (*(char *)(*(long *)(*(long *)PTR_DAT_04cab380 + 0xb8) + 4) != '\0')) {
    return plVar3;
  }
                    /* try { // try from 022ff150 to 023ff157 has its CatchHandler @ 022ff528 */
  if ((bRam0000000004f9bc7e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1b78);
    FUN_02132f7c(PTR_DAT_04cb1b80);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cac518);
    bRam0000000004f9bc7e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848(0);
  if ((uVar4 & 1) == 0) {
    if (cRam0000000004f9bcfc == '\0') {
      FUN_02132f7c(PTR_DAT_04cb1b88);
      cRam0000000004f9bcfc = '\x01';
    }
    if ((**(char **)(*(long *)PTR_DAT_04cb1b88 + 0xb8) == '\0') &&
       (uVar4 = Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                          (param_1,*(undefined8 *)PTR_DAT_04cac518), puVar1 = PTR_DAT_04cb1b80,
       (uVar4 & 1) == 0)) {
      if (*(long *)(param_1 + 0x38) == 0) {
LAB_022ff2c4:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      iVar2 = *(int *)(*(long *)(param_1 + 0x38) + 0x18);
      if (-1 < iVar2 + -1) {
        do {
          if (*(long *)(param_1 + 0x38) == 0) goto LAB_022ff2c4;
          iVar2 = iVar2 + -1;
          plVar3 = (long *)System_Collections_Generic_List_object___get_Item_3a81924
                                     (*(long *)(param_1 + 0x38),iVar2,*(undefined8 *)puVar1);
          if (plVar3 == (long *)0x0) goto LAB_022ff2c4;
          if ((((*(char *)((long)plVar3 + 0x2c) == '\0') && ((int)plVar3[5] != 0)) &&
              ((int)plVar3[5] != 5)) &&
             (uVar4 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0)),
             (uVar4 & 1) != 0)) {
            Dino_BusSand_App_UI_UIManagerEvents__RaiseBack_21ff2c8(plVar3);
            return plVar3;
          }
        } while (0 < iVar2);
      }
    }
  }
  return (long *)0x0;
}


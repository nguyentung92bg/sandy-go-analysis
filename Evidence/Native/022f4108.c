/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Find
UnityEngine_Transform_o* Dino_BusSand_App_UI_UIPanel__Find (Dino_BusSand_App_UI_UIPanel_o* __this, System_String_o* nameOrPath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Find
   UnityEngine_Transform_o* Dino_BusSand_App_UI_UIPanel__Find (Dino_BusSand_App_UI_UIPanel_o*
   __this, System_String_o* nameOrPath, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_UIPanel__Find_21f4108(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
                    /* catch() { ... } // from try @ 022f4074 with catch @ 022f410c */
                    /* catch() { ... } // from try @ 022f404c with catch @ 022f4120 */
  if ((bRam0000000004f9bc93 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb15d8);
    FUN_02132f7c(PTR_DAT_04cb15e0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9bc93 = 1;
  }
                    /* try { // try from 022f4160 to 023f421f has its CatchHandler @ 022f4160
                       catch(type#1 @ 00000000) { ... } // from try @ 022f4160 with catch @ 022f4160
                       catch(type#1 @ 00000000) { ... } // from try @ 022f4248 with catch @ 022f4160
                       catch(type#1 @ 00000000) { ... } // from try @ 022f42a4 with catch @ 022f4160
                       catch(type#1 @ 00000000) { ... } // from try @ 022f4394 with catch @ 022f4160
                        */
  uStack_28 = 0;
  uVar1 = System_String__IsNullOrEmpty_46d2084(param_2,0);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (*(long *)(param_1 + 0x30),param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cb15d8)
    ;
    uVar2 = uStack_28;
    if ((uVar1 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
      if ((uVar1 & 1) != 0) {
        return uStack_28;
      }
    }
    if (param_2 != 0) {
      uVar1 = System_String__Contains_46d726c(param_2,*(undefined8 *)PTR_DAT_04cabd10,0);
      uVar2 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      if ((uVar1 & 1) == 0) {
        uVar2 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(uVar2,param_2);
      }
      else {
        uVar2 = Dino_BusSand_App_UI_UIPanel__FindPath_22007d4();
      }
                    /* try { // try from 022f4220 to 023f4237 has its CatchHandler @ 022f443c */
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar1 = UnityEngine_Object__op_Inequality_43c8dec(uVar2,0,0);
                    /* try { // try from 022f4240 to 023f4247 has its CatchHandler @ 022f4438 */
      if ((uVar1 & 1) != 0) {
                    /* try { // try from 022f4248 to 023f4283 has its CatchHandler @ 022f4160 */
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_022f4278;
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (*(long *)(param_1 + 0x30),param_2,uVar2,*(undefined8 *)PTR_DAT_04cb15e0);
      }
      return uVar2;
    }
  }
LAB_022f4278:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


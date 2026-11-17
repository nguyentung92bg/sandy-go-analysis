/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Show
UnityEngine_GameObject_o* Dino_BusSand_App_UI_UIPanel__Show (Dino_BusSand_App_UI_UIPanel_o* __this, System_String_o* name, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$Show
   UnityEngine_GameObject_o* Dino_BusSand_App_UI_UIPanel__Show (Dino_BusSand_App_UI_UIPanel_o*
   __this, System_String_o* name, bool on, const MethodInfo* method); */

long Dino_BusSand_App_UI_UIPanel__Show_21f4018(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 022f40b0 with catch @ 022f401c */
  if ((bRam0000000004f9bc96 & 1) == 0) {
                    /* try { // try from 022f404c to 023f4057 has its CatchHandler @ 022f4120 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc96 = 1;
  }
  lVar2 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,param_2);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 022f4074 to 023f407f has its CatchHandler @ 022f410c */
    thunk_FUN_0218fdac(lVar6);
  }
                    /* try { // try from 022f4080 to 023f4097 has its CatchHandler @ 022f40e8 */
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    if ((lVar2 == 0) || (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(lVar2,0), lVar6 == 0)
       ) goto LAB_022f4104;
                    /* try { // try from 022f40ac to 023f40af has its CatchHandler @ 022f40b0 */
    UnityEngine_GameObject__SetActive_43c1408(lVar6,param_3 & 1,0);
  }
                    /* catch() { ... } // from try @ 022f40ac with catch @ 022f40b0
                       try { // try from 022f40b0 to 023f4133 has its CatchHandler @ 022f401c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (lVar2 != 0) {
    if ((bRam0000000004fa8307 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7648,0);
      FUN_02132f7c(PTR_DAT_04cf7650);
      bRam0000000004fa8307 = 1;
    }
    puVar1 = PTR_DAT_04cf7650;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *(long *)(lVar2 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar2,0);
    }
    if (pcRam0000000004fa8318 == (code *)0x0) {
      pcRam0000000004fa8318 = (code *)FUN_02132f40(&UNK_00e61486);
    }
    uVar3 = (*pcRam0000000004fa8318)(lVar6);
    lVar2 = *(long *)puVar1;
    if (*(long *)(lVar2 + 0x38) == 0) {
      FUN_0216b4cc(lVar2);
    }
    if (uVar3 != 0) {
      if (cRam0000000004f9d849 == '\0') {
        FUN_02132f7c(&DAT_04ddbd40);
        cRam0000000004f9d849 = '\x01';
      }
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)System_IntPtr__op_Explicit_487833c();
        lVar6 = *plVar4;
      }
      else {
        lVar6 = System_Runtime_InteropServices_GCHandle__GetTarget_476c7dc(uVar3,0);
      }
      lVar2 = **(long **)(lVar2 + 0x38);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0216b470(lVar2);
      }
      if (lVar6 != 0) {
        lVar5 = thunk_FUN_0216e7a0(lVar6,lVar2);
        if (lVar5 != 0) {
          return lVar5;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(lVar6,lVar2);
      }
    }
    return 0;
  }
LAB_022f4104:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


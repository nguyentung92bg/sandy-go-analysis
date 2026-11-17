/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$OnBeginFrame
void Dino_BusSand_App_UI_ScreenCover__OnBeginFrame (UnityEngine_Rendering_ScriptableRenderContext_o ctx, System_Collections_Generic_List_Camera__o* cameras, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$OnBeginFrame
   void Dino_BusSand_App_UI_ScreenCover__OnBeginFrame
   (UnityEngine_Rendering_ScriptableRenderContext_o ctx, System_Collections_Generic_List_Camera__o*
   cameras, const MethodInfo* method); */

void Dino_BusSand_App_UI_ScreenCover__OnBeginFrame_21fcbe4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar3 = PTR_DAT_04cb19a8;
  if ((bRam0000000004f9bc6f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb19f8);
    FUN_02132f7c(PTR_DAT_04cb1a00);
    FUN_02132f7c(PTR_DAT_04cb1a08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb19a8);
    bRam0000000004f9bc6f = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9bcfa == '\0') {
    FUN_02132f7c(PTR_DAT_04cb19a8);
    cRam0000000004f9bcfa = '\x01';
  }
  lVar8 = *(long *)puVar3;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar3;
  }
  pcVar11 = *(char **)(lVar8 + 0xb8);
  pcVar11[1] = '\0';
  puVar1 = PTR_DAT_04ca9ae8;
  if (*pcVar11 == '\0') {
                    /* try { // try from 022fceec to 023fcf3b has its CatchHandler @ 022fceec
                       catch(type#1 @ 00000000) { ... } // from try @ 022fceec with catch @ 022fceec
                       catch(type#1 @ 00000000) { ... } // from try @ 022fcf7c with catch @ 022fceec
                       catch(type#1 @ 00000000) { ... } // from try @ 022fcfec with catch @ 022fceec
                        */
    return;
  }
  if (cRam0000000004f9b94d == '\0') {
    FUN_02132f7c(PTR_DAT_04cad1b0);
    cRam0000000004f9b94d = '\x01';
  }
  puVar2 = PTR_DAT_04cad1b0;
  uVar13 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar13,0,0);
  puVar4 = PTR_DAT_04cb1a08;
  if ((uVar9 & 1) != 0) {
    return;
  }
  iVar6 = 0;
  uVar5 = 0;
  while( true ) {
    lVar8 = *(long *)puVar3;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar3;
    }
    lVar12 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar12 == 0) goto LAB_022fcf04;
    if (*(int *)(lVar12 + 0x18) <= iVar6 || (uVar5 & 1) != 0) break;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar12 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_022fcf04;
    }
    uVar13 = System_Collections_Generic_List_object___get_Item_3a81924
                       (lVar12,iVar6,*(undefined8 *)puVar4);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar13,0,0);
    if ((uVar9 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      lVar8 = *(long *)puVar3;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar3;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if ((lVar8 == 0) ||
         (lVar8 = System_Collections_Generic_List_object___get_Item_3a81924
                            (lVar8,iVar6,*(undefined8 *)puVar4), lVar8 == 0)) goto LAB_022fcf04;
      uVar5 = Dino_BusSand_App_UI_ScreenCover__Covers_21fc994();
    }
    iVar6 = iVar6 + 1;
  }
  if ((uVar5 & 1) == 0) {
    lVar8 = 0;
  }
  else {
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
    if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_022fcf04;
    lVar8 = *(long *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x48);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (param_2 != 0) {
    uVar9 = System_Collections_Generic_List_object___Contains_3a81f90
                      (param_2,lVar8,*(undefined8 *)PTR_DAT_04cb19f8);
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (lVar8 != 0) {
      iVar6 = UnityEngine_Camera__get_cullingMask_43575d8(lVar8,0);
      if (iVar6 == 0) {
        return;
      }
      lVar12 = *(long *)puVar3;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar12 = *(long *)puVar3;
      }
      plVar10 = (long *)(*(long *)(lVar12 + 0xb8) + 0x18);
      *plVar10 = lVar8;
      thunk_FUN_02134474(plVar10,lVar8);
                    /* try { // try from 022fceac to 023fceaf has its CatchHandler @ 022fcee8 */
      uVar7 = UnityEngine_Camera__get_cullingMask_43575d8(lVar8,0);
      *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20) = uVar7;
      UnityEngine_Camera__set_cullingMask_435768c(lVar8,0,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fceac with catch @ 022fcee8
                        */
      if (cRam0000000004f9bcfa == '\0') {
        FUN_02132f7c(&DAT_04daf240,0);
        cRam0000000004f9bcfa = '\x01';
      }
      if (*(int *)(_DAT_04daf240 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      *(undefined1 *)(*(long *)(_DAT_04daf240 + 0xb8) + 1) = 1;
      return;
    }
  }
LAB_022fcf04:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


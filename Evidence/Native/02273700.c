/* IL2CPP: Dino.BusSand.App.CrashContext$$Graphics
void Dino_BusSand_App_CrashContext__Graphics (System_String_o* gpu, System_String_o* webView, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$Graphics
   void Dino_BusSand_App_CrashContext__Graphics (System_String_o* gpu, System_String_o* webView,
   const MethodInfo* method); */

void Dino_BusSand_App_CrashContext__Graphics_2173700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04cac450;
  if ((bRam0000000004f9b8b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cacdc0);
    FUN_02132f7c(PTR_DAT_04cacdc8);
    bRam0000000004f9b8b8 = 1;
  }
  puVar3 = PTR_DAT_04cacdc8;
  puVar2 = PTR_DAT_04cacdc0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = Dino_BusSand_App_CrashContext__Clip_2173674(param_1);
  Dino_BusSand_App_CrashContext__Key_216f9dc(*(undefined8 *)puVar2,uVar6);
  lVar7 = Dino_BusSand_App_CrashContext__Clip_2173674(param_2);
  puVar1 = PTR_DAT_04cacbb0;
  uVar6 = *(undefined8 *)puVar3;
  if ((bRam0000000004f9b8b4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cab608);
    FUN_02132f7c(PTR_DAT_04caaf80);
    FUN_02132f7c(PTR_DAT_04cacbb8);
    FUN_02132f7c(PTR_DAT_04cacbb0);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b8b4 = 1;
  }
  uStack_38 = 0;
  lVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar4,0);
  puVar2 = PTR_DAT_04cac450;
  puVar1 = PTR_DAT_04ca9c30;
  if (lVar4 != 0) {
    puVar9 = (undefined8 *)(lVar4 + 0x18);
    *puVar9 = uVar6;
    thunk_FUN_02134474(puVar9,uVar6);
    plVar8 = (long *)(lVar4 + 0x20);
    *plVar8 = lVar7;
    thunk_FUN_02134474(plVar8,lVar7);
    lVar7 = *(long *)puVar1;
    if (*plVar8 != 0) {
      lVar7 = *plVar8;
    }
    *plVar8 = lVar7;
    thunk_FUN_02134474(plVar8);
    lVar7 = *(long *)puVar2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar2;
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
    if (lVar7 != 0) {
      uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                        (lVar7,*puVar9,&uStack_38,*(undefined8 *)PTR_DAT_04cab608);
      if (((uVar5 & 1) == 0) ||
         (uVar5 = System_String__op_Equality_46d1108(uStack_38,*plVar8,0), (uVar5 & 1) == 0)) {
        lVar7 = *(long *)puVar2;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar7 = *(long *)puVar2;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
        if (lVar7 == 0) goto LAB_0226fbd4;
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar7,*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),
                   *(undefined8 *)PTR_DAT_04caaf80);
        plVar8 = (long *)(lVar4 + 0x10);
        *plVar8 = **(long **)(*(long *)puVar2 + 0xb8);
        thunk_FUN_02134474(plVar8);
        if (*plVar8 != 0) {
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
          System_Action___ctor_47b5ed0(uVar6,lVar4,*(undefined8 *)PTR_DAT_04cacbb8,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          Dino_BusSand_App_CrashContext__Send_2173340(uVar6);
        }
      }
      return;
    }
  }
LAB_0226fbd4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


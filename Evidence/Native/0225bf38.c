/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$TopPopup
Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_App_QaPilot_Runner__TopPopup (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$TopPopup
   Dino_BusSand_App_UI_UIPanel_o* Dino_BusSand_App_QaPilot_Runner__TopPopup (const MethodInfo*
   method); */

long * Dino_BusSand_App_QaPilot_Runner__TopPopup_215bf38(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  puVar3 = PTR_DAT_04caba98;
  if ((bRam0000000004f9b7f6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabab8);
    FUN_02132f7c(PTR_DAT_04cabac0);
    FUN_02132f7c(PTR_DAT_04cabac8);
    FUN_02132f7c(PTR_DAT_04cabdc0);
    FUN_02132f7c(PTR_DAT_04cab538);
    FUN_02132f7c(PTR_DAT_04cabae0);
                    /* try { // try from 0225bfb0 to 0235c18f has its CatchHandler @ 0225bfb0
                       catch() { ... } // from try @ 0225bfb0 with catch @ 0225bfb0
                       catch() { ... } // from try @ 0225c198 with catch @ 0225bfb0
                       catch() { ... } // from try @ 0225c258 with catch @ 0225bfb0 */
    FUN_02132f7c(PTR_DAT_04caba98);
    bRam0000000004f9b7f6 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = Dino_BusSand_App_QaPilot_Runner__OpenPanels_215c168();
  puVar6 = PTR_DAT_04cabdc0;
  puVar5 = PTR_DAT_04cabac0;
  puVar4 = PTR_DAT_04cabab8;
  puVar2 = PTR_DAT_04cab538;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_78,lVar7,*(undefined8 *)PTR_DAT_04cabae0);
  plStack_50 = plStack_68;
  uStack_58 = puStack_70;
  uStack_60 = uStack_78;
  uStack_78 = 0;
  puStack_70 = &uStack_60;
  while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                           (&uStack_60,*(undefined8 *)puVar5), plVar11 = plStack_50,
        (uVar8 & 1) != 0) {
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar7 = **(long **)(lVar7 + 0xb8);
    plVar9 = (long *)System_Object__GetType_4876970(plVar11,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar10 = (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(uVar10,uVar10);
    }
    uVar8 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                      (lVar7,uVar10,*(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
      if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
      goto LAB_0225c0c4;
    }
  }
  plVar11 = (long *)0x0;
LAB_0225c0c4:
  System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
            (&uStack_60,*(undefined8 *)puVar4);
  return plVar11;
}


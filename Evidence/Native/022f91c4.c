/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$Pending
System_String_o* Dino_BusSand_App_UI_MechanicGuide__Pending (Dino_BusSand_Core_LevelData_o* lv, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide$$Pending
   System_String_o* Dino_BusSand_App_UI_MechanicGuide__Pending (Dino_BusSand_Core_LevelData_o* lv,
   const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_MechanicGuide__Pending_21f91c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bc5a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab6a0);
    FUN_02132f7c(PTR_DAT_04cab6c8);
    FUN_02132f7c(PTR_DAT_04cab6d0);
    FUN_02132f7c(PTR_DAT_04cb1868);
                    /* catch() { ... } // from try @ 022f926c with catch @ 022f9220 */
    FUN_02132f7c(PTR_DAT_04cab720);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb1870);
    bRam0000000004f9bc5a = 1;
  }
  puVar1 = PTR_DAT_04cb1868;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 022f9268 to 023f926b has its CatchHandler @ 022f9298 */
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022f926c to 023f92af has its CatchHandler @ 022f9220 */
  iVar4 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  iVar5 = Dino_BusSand_Core_LevelCatalog__get_Count_2410650(0);
                    /* catch() { ... } // from try @ 022f9268 with catch @ 022f9298 */
  lVar6 = Dino_BusSand_App_Gameplay_MechanicIntro__Present_22a084c(param_1,0);
  if (iVar5 < iVar4) {
    if (lVar6 == 0) {
LAB_022f93ec:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,lVar6,*(undefined8 *)PTR_DAT_04cab720);
    puVar3 = PTR_DAT_04cb1870;
    puVar1 = PTR_DAT_04cab6c8;
    while (uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                             (&uStack_48,*(undefined8 *)puVar1), (uVar7 & 1) != 0) {
      uVar8 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uStack_38,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar8,1,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)PTR_DAT_04cab6a0);
    uVar8 = 0;
  }
  else {
    if (lVar6 == 0) goto LAB_022f93ec;
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,lVar6,*(undefined8 *)PTR_DAT_04cab720);
    puVar3 = PTR_DAT_04cb1870;
    puVar1 = PTR_DAT_04cab6c8;
    do {
      uVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar1);
      uVar8 = uStack_38;
      if ((uVar7 & 1) == 0) {
        uVar8 = 0;
        break;
      }
      uVar9 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uStack_38,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = Dino_BusSand_App_Meta_Profile__Flag_22736a4(uVar9,0);
    } while ((uVar7 & 1) != 0);
    System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
              (&uStack_48,*(undefined8 *)PTR_DAT_04cab6a0);
  }
  return uVar8;
}


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$StripMade
void Dino_BusSand_App_UI_KitPrefabs__StripMade (Dino_BusSand_App_UI_KitNode_o* n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$StripMade
   void Dino_BusSand_App_UI_KitPrefabs__StripMade (Dino_BusSand_App_UI_KitNode_o* n, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_KitPrefabs__StripMade_2183fb0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_50;
  
  if ((bRam0000000004f9b938 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad7d0);
    FUN_02132f7c(PTR_DAT_04cad7d8);
    FUN_02132f7c(PTR_DAT_04cad7e0);
    FUN_02132f7c(PTR_DAT_04cad7e8);
                    /* try { // try from 02284004 to 0238400b has its CatchHandler @ 02284120 */
    FUN_02132f7c(PTR_DAT_04cad7f0);
    FUN_02132f7c(PTR_DAT_04cab538);
                    /* try { // try from 02284024 to 02384043 has its CatchHandler @ 02284144 */
    FUN_02132f7c(PTR_DAT_04cad7f8);
    FUN_02132f7c(PTR_DAT_04cab800);
    FUN_02132f7c(PTR_DAT_04cad800);
    FUN_02132f7c(PTR_DAT_04cad808);
    FUN_02132f7c(PTR_DAT_04cad810);
    FUN_02132f7c(PTR_DAT_04cad818);
                    /* try { // try from 02284064 to 02384073 has its CatchHandler @ 0228411c */
    FUN_02132f7c(PTR_DAT_04cad820);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad740);
                    /* try { // try from 02284088 to 023840b7 has its CatchHandler @ 0228412c */
    FUN_02132f7c(PTR_DAT_04cad828);
    FUN_02132f7c(PTR_DAT_04cad830);
    bRam0000000004f9b938 = 1;
  }
  uStack_60 = 0;
  uStack_58 = 0;
  plStack_50 = (long *)0x0;
  if (param_1 != 0) {
    lVar14 = *(long *)(param_1 + 0x40);
    if ((lVar14 != 0) && (*(long *)(lVar14 + 0x18) != 0)) {
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab800);
      System_Collections_Generic_HashSet_object____ctor_37e5448
                (lVar7,lVar14,*(undefined8 *)PTR_DAT_04cad7f8);
      uVar8 = UnityEngine_Component__GetComponents_object__26fa124
                        (param_1,*(undefined8 *)PTR_DAT_04cad7d8);
                    /* try { // try from 02284114 to 0238411b has its CatchHandler @ 0228413c */
      lVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad820);
                    /* catch() { ... } // from try @ 02284064 with catch @ 0228411c
                       try { // try from 0228411c to 0238416f has its CatchHandler @ 02283dd0 */
                    /* catch() { ... } // from try @ 02284004 with catch @ 02284120 */
                    /* catch() { ... } // from try @ 02283eac with catch @ 02284124
                       catch() { ... } // from try @ 02283ed4 with catch @ 02284124 */
                    /* catch() { ... } // from try @ 02284088 with catch @ 0228412c */
      System_Collections_Generic_List_object____ctor_3a814c8
                (lVar14,uVar8,*(undefined8 *)PTR_DAT_04cad818);
      puVar2 = PTR_DAT_04cad830;
      lVar9 = *(long *)PTR_DAT_04cad830;
                    /* catch() { ... } // from try @ 02284114 with catch @ 0228413c */
                    /* catch() { ... } // from try @ 02283f1c with catch @ 02284140 */
      if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02284024 with catch @ 02284144 */
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      puVar13 = *(undefined8 **)(lVar9 + 0xb8);
      lVar15 = puVar13[1];
      if (lVar15 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar8 = *puVar13;
        lVar15 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad7d0);
        System_Comparison_object____ctor_3326afc(lVar15,uVar8,*(undefined8 *)PTR_DAT_04cad828,0);
        plVar10 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar10 = lVar15;
        thunk_FUN_02134474(plVar10,lVar15);
      }
      if (lVar14 == 0) goto LAB_02284324;
      System_Collections_Generic_List_object___Sort_3a83690
                (lVar14,lVar15,*(undefined8 *)PTR_DAT_04cad810);
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_78,lVar14,*(undefined8 *)PTR_DAT_04cad808);
      puVar6 = PTR_DAT_04cad800;
      puVar5 = PTR_DAT_04cad7e8;
      puVar4 = PTR_DAT_04cad740;
      puVar3 = PTR_DAT_04cab538;
      puVar2 = PTR_DAT_04ca9ae8;
      uStack_58 = puStack_70;
      uStack_60 = uStack_78;
      plStack_50 = plStack_68;
      puStack_70 = &uStack_60;
      uStack_78 = 0;
      while (uVar11 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                (&uStack_60,*(undefined8 *)puVar5), plVar10 = plStack_50,
            (uVar11 & 1) != 0) {
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar11 = UnityEngine_Object__op_Equality_43c6f30(plVar10,0,0);
        if ((uVar11 & 1) == 0) {
          if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar14 = *plVar10;
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if (((*(byte *)(lVar14 + 0x130) < bVar1) ||
              (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) &&
             (lVar14 != *(long *)puVar6)) {
            plVar12 = (long *)System_Object__GetType_4876970(plVar10,0);
            if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar8 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224(uVar8,uVar8);
            }
            uVar11 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                               (lVar7,uVar8,*(undefined8 *)puVar3);
            if ((uVar11 & 1) != 0) {
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              UnityEngine_Object__DestroyImmediate_43c8260(plVar10,0);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_60,*(undefined8 *)PTR_DAT_04cad7e0);
    }
    return;
  }
LAB_02284324:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


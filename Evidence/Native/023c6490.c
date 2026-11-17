/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$VisibleRenderers
UnityEngine_Renderer_array* Dino_BusSand_App_UI_GuideDimHoles__VisibleRenderers (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$VisibleRenderers
   UnityEngine_Renderer_array* Dino_BusSand_App_UI_GuideDimHoles__VisibleRenderers
   (UnityEngine_Transform_o* t, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_GuideDimHoles__VisibleRenderers_22c6490(long param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long *plVar16;
  ulong uVar17;
  undefined8 unaff_x30;
  
  puVar4 = PTR_DAT_04cb6918;
  puVar3 = PTR_DAT_04cb6910;
  if ((bRam0000000004f9c35a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6920);
    FUN_02132f7c(PTR_DAT_04cb6928);
    FUN_02132f7c(PTR_DAT_04cb6930);
    FUN_02132f7c(PTR_DAT_04cb6938);
    FUN_02132f7c(PTR_DAT_04cb6918);
    FUN_02132f7c(PTR_DAT_04cb6910);
    FUN_02132f7c(PTR_DAT_04cb6940);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb6948);
    FUN_02132f7c(PTR_DAT_04cb6950);
    FUN_02132f7c(PTR_DAT_04cb6958);
    bRam0000000004f9c35a = 1;
  }
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar9,*(undefined8 *)puVar4);
  if ((param_1 != 0) &&
     (lVar10 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                         (param_1,0,*(undefined8 *)PTR_DAT_04cb6928), puVar7 = PTR_DAT_04cb6950,
     puVar6 = PTR_DAT_04cb6948, puVar5 = PTR_DAT_04cb6940, puVar4 = PTR_DAT_04cb6920,
     puVar3 = PTR_DAT_04ca9ae8, lVar10 != 0)) {
    if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
      uVar17 = 0;
      uVar13 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
      do {
        if (uVar13 <= uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        plVar16 = *(long **)(lVar10 + 0x20 + uVar17 * 8);
        if (plVar16 != (long *)0x0) {
          lVar14 = *plVar16;
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
            bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
            if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6))
            goto LAB_023c6728;
          }
          iVar8 = UnityEngine_Renderer__get_shadowCastingMode_4373ba0(plVar16,0);
          if (iVar8 != 3) {
            uVar11 = UnityEngine_Component__GetComponentInParent_object__26f9d74
                               (plVar16,*(undefined8 *)puVar4);
                    /* try { // try from 023c6654 to 024c67db has its CatchHandler @ 023c6654
                       catch() { ... } // from try @ 023c6654 with catch @ 023c6654
                       catch() { ... } // from try @ 023c67e4 with catch @ 023c6654
                       catch() { ... } // from try @ 023c6820 with catch @ 023c6654
                       catch() { ... } // from try @ 023c6994 with catch @ 023c6654 */
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar3);
            }
            uVar13 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
            if ((uVar13 & 1) == 0) {
              lVar14 = UnityEngine_Object__get_name_43c71a4(plVar16,0);
              if (lVar14 == 0) goto LAB_023c676c;
              uVar13 = System_String__Contains_46d726c(lVar14,*(undefined8 *)puVar7,0);
              if ((uVar13 & 1) == 0) {
                lVar14 = UnityEngine_Object__get_name_43c71a4(plVar16,0);
                if (lVar14 == 0) goto LAB_023c676c;
                uVar13 = System_String__Contains_46d726c(lVar14,*(undefined8 *)PTR_DAT_04cb6958,0);
                if ((uVar13 & 1) == 0) {
                  if (lVar9 == 0) goto LAB_023c676c;
                  lVar14 = *(long *)(lVar9 + 0x10);
                  lVar15 = *(long *)PTR_DAT_04cb6930;
                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                  if (lVar14 == 0) goto LAB_023c676c;
                  uVar2 = *(uint *)(lVar9 + 0x18);
                  if (uVar2 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar2 + 1;
                    puVar12 = (undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20);
                    *puVar12 = plVar16;
                    thunk_FUN_02134474(puVar12,plVar16);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar9,plVar16,
                               *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
            }
          }
        }
LAB_023c6728:
        uVar13 = (ulong)*(uint *)(lVar10 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar10 + 0x18));
    }
    if (lVar9 != 0) {
      lVar10 = *(long *)PTR_DAT_04cb6938;
      iVar8 = *(int *)(lVar9 + 0x18);
      lVar14 = *(long *)(*(long *)(lVar10 + 0x20) + 0xc0);
      if (iVar8 == 0) {
        lVar9 = *(long *)(lVar14 + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        lVar9 = *(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
          lVar9 = FUN_0216b470();
        }
        uVar11 = **(undefined8 **)(lVar9 + 0xb8);
      }
      else {
        lVar10 = *(long *)(lVar14 + 0x18);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_0216b470();
        }
        uVar11 = FUN_02133068(lVar10,iVar8);
        System_Array__Copy_4852078
                  (*(undefined8 *)(lVar9 + 0x10),0,uVar11,0,*(undefined4 *)(lVar9 + 0x18),0,in_x6,
                   in_x7,unaff_x30,unaff_x21,unaff_x20,unaff_x19);
      }
      return uVar11;
    }
  }
LAB_023c676c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


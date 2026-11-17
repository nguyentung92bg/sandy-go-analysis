/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$Mat
UnityEngine_Material_o* Dino_BusSand_App_UI_UiSkin__Mat (System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023a2e78) */
/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$Mat
   UnityEngine_Material_o* Dino_BusSand_App_UI_UiSkin__Mat (System_String_o* key, const MethodInfo*
   method); */

ulong Dino_BusSand_App_UI_UiSkin__Mat_22a2b68(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong auStack_58 [2];
  
  if ((bRam0000000004f9c26a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c26a = 1;
  }
  uVar5 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if ((uVar5 & 1) != 0) {
    return 0;
  }
                    /* try { // try from 023a2bac to 024a2bb3 has its CatchHandler @ 023a2c48 */
  lVar6 = Dino_BusSand_App_UI_UiSkin__get_BootOnly_22a207c(0);
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
                    /* try { // try from 023a2bc8 to 024a2bcb has its CatchHandler @ 023a2c38 */
                    /* try { // try from 023a2bcc to 024a2bdb has its CatchHandler @ 023a2c44 */
    thunk_FUN_0218fdac(lVar9);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar6 == 0) goto LAB_023a2c5c;
                    /* try { // try from 023a2be8 to 024a2bef has its CatchHandler @ 023a2c40 */
                    /* try { // try from 023a2bf0 to 024a2c2f has its CatchHandler @ 023a2ae4 */
    lVar6 = Dino_BusSand_App_UI_UiSkin__FindMat_22a2c60(lVar6,param_1,0);
    if (lVar6 != 0) {
      return lVar6;
    }
  }
  lVar6 = Dino_BusSand_App_UI_UiSkin__get_I_22a1e1c();
  lVar9 = *(long *)puVar1;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar9);
  }
  uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
  uVar5 = 0;
                    /* try { // try from 023a2c30 to 024a2c33 has its CatchHandler @ 023a2c3c */
  if ((uVar7 & 1) == 0) {
    return 0;
  }
                    /* try { // try from 023a2c34 to 024a2c63 has its CatchHandler @ 023a2ae4 */
  if (lVar6 == 0) {
LAB_023a2c5c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224(uVar5);
  }
  if ((bRam0000000004f9c26b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5a78);
    FUN_02132f7c(PTR_DAT_04cb5a80);
    FUN_02132f7c(PTR_DAT_04cb5a88);
    FUN_02132f7c(PTR_DAT_04cb5a90);
    FUN_02132f7c(PTR_DAT_04cb5a98);
    FUN_02132f7c(PTR_DAT_04cb5aa0);
    FUN_02132f7c(PTR_DAT_04cb5aa8);
    FUN_02132f7c(PTR_DAT_04cb5ab0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c26b = 1;
  }
  auStack_58[0] = 0;
  plVar10 = (long *)(lVar6 + 0x50);
  lVar9 = *plVar10;
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (lVar9 == 0) {
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb5a90);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (uVar8,*(undefined8 *)PTR_DAT_04cb5a80);
    *(undefined8 *)(lVar6 + 0x50) = uVar8;
    thunk_FUN_02134474(plVar10,uVar8);
    if (*(long *)(lVar6 + 0x28) == 0) goto LAB_023a2e9c;
    System_Collections_Generic_List_UiSkin_MatEntry___GetEnumerator_2abee68
              (&uStack_a0,*(long *)(lVar6 + 0x28),*(undefined8 *)PTR_DAT_04cb5ab0);
    puVar3 = PTR_DAT_04cb5aa0;
    puVar2 = PTR_DAT_04cb5a88;
    puVar1 = PTR_DAT_04ca9ae8;
    puStack_78 = puStack_98;
    uStack_80 = uStack_a0;
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    uStack_a0 = 0;
    puStack_98 = &uStack_80;
    while (uVar5 = System_Collections_Generic_List_Enumerator_UiSkin_MatEntry___MoveNext_36187dc
                             (&uStack_80,*(undefined8 *)puVar3), uVar4 = uStack_68,
          uVar8 = uStack_70, (uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar5 & 1) != 0) {
        if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (*plVar10,uVar8,uVar4,*(undefined8 *)puVar2);
      }
    }
    System_Collections_Generic_List_Enumerator_UiSkin_MatEntry___Dispose_36187d8
              (&uStack_80,*(undefined8 *)PTR_DAT_04cb5a98);
    lVar9 = *plVar10;
    if (lVar9 == 0) goto LAB_023a2e9c;
  }
  uVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar9,param_1,auStack_58,*(undefined8 *)PTR_DAT_04cb5a78);
  uVar5 = auStack_58[0];
  if ((uVar7 & 1) == 0) {
    uVar8 = *(undefined8 *)(lVar6 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar8,0,0);
    uVar5 = 0;
    if ((uVar7 & 1) != 0) {
      if (*(long *)(lVar6 + 0x18) == 0) {
LAB_023a2e9c:
                    /* WARNING: Subroutine does not return */
        FUN_02133224(0);
      }
      uVar5 = *(ulong *)(*(long *)(lVar6 + 0x18) + 0x88);
    }
  }
  return uVar5;
}


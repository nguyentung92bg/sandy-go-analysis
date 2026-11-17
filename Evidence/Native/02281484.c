/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$EnsureIndex
void Dino_BusSand_App_UI_KitPrefabs__EnsureIndex (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$EnsureIndex
   void Dino_BusSand_App_UI_KitPrefabs__EnsureIndex (const MethodInfo* method); */

void Dino_BusSand_App_UI_KitPrefabs__EnsureIndex_2181484(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  puVar3 = PTR_DAT_04cac4f8;
  if ((bRam0000000004f9b92c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab528);
    FUN_02132f7c(PTR_DAT_04caa780);
    FUN_02132f7c(PTR_DAT_04caaf80);
    FUN_02132f7c(PTR_DAT_04caa788);
    FUN_02132f7c(PTR_DAT_04cad5b0);
    FUN_02132f7c(PTR_DAT_04cad5b8);
    FUN_02132f7c(PTR_DAT_04cad5c0);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cad5c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad5d0);
    FUN_02132f7c(PTR_DAT_04cad5d8);
    bRam0000000004f9b92c = 1;
  }
  lVar5 = *(long *)puVar3;
  uStack_50 = 0;
  uStack_48 = 0;
  lStack_40 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar3;
  }
  if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) == 0) {
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa788);
    System_Collections_Generic_Dictionary_object__object____ctor_34b3628
              (uVar6,*(undefined8 *)PTR_DAT_04caa780);
    lVar5 = *(long *)puVar3;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar3;
    }
    puVar7 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
    *puVar7 = uVar6;
    thunk_FUN_02134474(puVar7,uVar6);
    lVar5 = UnityEngine_Resources__Load_object__2891e2c
                      (*(undefined8 *)PTR_DAT_04cad5d8,*(undefined8 *)PTR_DAT_04cad5d0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
    if ((uVar8 & 1) == 0) {
      if ((lVar5 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      System_Collections_Generic_List_object___GetEnumerator_3a825f0
                (&uStack_68,*(long *)(lVar5 + 0x18),*(undefined8 *)PTR_DAT_04cad5c8);
      puVar4 = PTR_DAT_04cad5b8;
      puVar2 = PTR_DAT_04cab528;
      puVar1 = PTR_DAT_04caaf80;
      uStack_48 = puStack_60;
      uStack_50 = uStack_68;
      puStack_60 = &uStack_50;
      lStack_40 = lStack_58;
      uStack_68 = 0;
      while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                               (&uStack_50,*(undefined8 *)puVar4), lVar5 = lStack_40,
            (uVar8 & 1) != 0) {
        if ((lStack_40 != 0) &&
           (uVar8 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lStack_40 + 0x10),0),
           (uVar8 & 1) == 0)) {
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar9 = *(long *)puVar3;
          }
          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey_34b4598
                            (lVar9,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)puVar2);
          if ((uVar8 & 1) == 0) {
            lVar9 = *(long *)puVar3;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar9 = *(long *)puVar3;
            }
            lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (lVar9,*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),
                       *(undefined8 *)puVar1);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                (&uStack_50,*(undefined8 *)PTR_DAT_04cad5b0);
    }
  }
  return;
}


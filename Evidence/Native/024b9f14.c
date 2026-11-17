/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$get_Detail
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__get_Detail (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$get_Detail
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__get_Detail (const MethodInfo* method);
    */

long Dino_BusSand_View_MaterialLibrary__get_Detail_23b9f14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_04cbcae0;
  if ((bRam0000000004f9c994 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc878);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbcae8);
    FUN_02132f7c(PTR_DAT_04cbcae0);
    FUN_02132f7c(PTR_DAT_04cbcaf0);
    bRam0000000004f9c994 = 1;
  }
  puVar3 = PTR_DAT_04cbcaf0;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04cb6dd0;
  puVar7 = *(undefined8 **)(lVar4 + 0xb8);
  lVar9 = puVar7[1];
  uVar8 = *(undefined8 *)puVar3;
  if (lVar9 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar10 = *puVar7;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc878);
    System_Func_object____ctor_379de3c(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cbcae8,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar9;
    thunk_FUN_02134474(plVar5,lVar9);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar2 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c9a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5a78);
    FUN_02132f7c(PTR_DAT_04cb5a88);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9a3 = 1;
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
  if (lVar4 != 0) {
    uVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar4,uVar8,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cb5a78);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(0,0,0);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
    }
    if ((lVar9 != 0) &&
       (lVar4 = (**(code **)(lVar9 + 0x18))
                          (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28)), lVar4 != 0)
       ) {
      UnityEngine_Object__set_name_43c72ec(lVar4,uVar8,0);
      lVar9 = *(long *)puVar2;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar2;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar9 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar9,uVar8,lVar4,*(undefined8 *)PTR_DAT_04cb5a88);
        return lVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


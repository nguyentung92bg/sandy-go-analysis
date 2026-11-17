/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$get_GlassEmpty
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__get_GlassEmpty (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$get_GlassEmpty
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__get_GlassEmpty (const MethodInfo*
   method); */

long Dino_BusSand_View_MaterialLibrary__get_GlassEmpty_23bb4c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_04cbcae0;
  if ((bRam0000000004f9c9a2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc878);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbcbd0);
    FUN_02132f7c(PTR_DAT_04cbcae0);
    FUN_02132f7c(PTR_DAT_04cbcbd8);
    bRam0000000004f9c9a2 = 1;
  }
  puVar3 = PTR_DAT_04cbcbd8;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  puVar2 = PTR_DAT_04cb6dd0;
  puVar7 = *(undefined8 **)(lVar5 + 0xb8);
  lVar9 = puVar7[4];
  uVar8 = *(undefined8 *)puVar3;
  if (lVar9 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      puVar7 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar10 = *puVar7;
    lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbc878);
    System_Func_object____ctor_379de3c(lVar9,uVar10,*(undefined8 *)PTR_DAT_04cbcbd0,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20);
    *plVar6 = lVar9;
    thunk_FUN_02134474(plVar6,lVar9);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar1 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c9a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5a78);
    FUN_02132f7c(PTR_DAT_04cb5a88);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9a3 = 1;
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    uVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar5,uVar8,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cb5a78);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(0,0,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
    }
    if ((lVar9 != 0) &&
       (lVar5 = (**(code **)(lVar9 + 0x18))
                          (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28)), lVar5 != 0)
       ) {
      UnityEngine_Object__set_name_43c72ec(lVar5,uVar8,0);
      lVar9 = *(long *)puVar1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar1;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
      if (lVar9 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar9,uVar8,lVar5,*(undefined8 *)PTR_DAT_04cb5a88);
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


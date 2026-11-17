/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Get
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Get (System_String_o* key, System_Func_Material__o* make, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Get
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Get (System_String_o* key,
   System_Func_Material__o* make, const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary__Get_23ba02c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lStack_28;
  
  puVar1 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c9a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5a78);
    FUN_02132f7c(PTR_DAT_04cb5a88);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9a3 = 1;
  }
  lVar2 = *(long *)puVar1;
  lStack_28 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar2,param_1,&lStack_28,*(undefined8 *)PTR_DAT_04cb5a78);
    lVar2 = lStack_28;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(lVar2,0,0);
      if ((uVar3 & 1) != 0) {
        return lStack_28;
      }
    }
    if ((param_2 != 0) &&
       (lStack_28 = (**(code **)(param_2 + 0x18))
                              (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0x28)),
       lStack_28 != 0)) {
      UnityEngine_Object__set_name_43c72ec(lStack_28,param_1,0);
      lVar2 = *(long *)puVar1;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar2 = *(long *)puVar1;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar2 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar2,param_1,lStack_28,*(undefined8 *)PTR_DAT_04cb5a88);
        return lStack_28;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Unlit
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Unlit (System_String_o* name, UnityEngine_Color_o color, UnityEngine_Texture_o* tex, bool additive, int32_t queueOffset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Unlit
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Unlit (System_String_o* name,
   UnityEngine_Color_o color, UnityEngine_Texture_o* tex, bool additive, int32_t queueOffset, const
   MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,byte param_7,undefined4 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_04cbc890;
  if ((bRam0000000004f9c999 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc878);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbc898);
    FUN_02132f7c(PTR_DAT_04cbc890);
    FUN_02132f7c(PTR_DAT_04cbc8a0);
    bRam0000000004f9c999 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar5,0);
  puVar4 = PTR_DAT_04cbc8a0;
  puVar2 = PTR_DAT_04cbc878;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar5 + 0x10) = param_1;
  puVar3 = PTR_DAT_04cbc898;
  *(undefined4 *)(lVar5 + 0x14) = param_2;
  puVar1 = PTR_DAT_04cb6dd0;
  *(undefined4 *)(lVar5 + 0x18) = param_3;
  *(undefined4 *)(lVar5 + 0x1c) = param_4;
  *(undefined8 *)(lVar5 + 0x20) = param_6;
  thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20),param_6);
  uVar6 = *(undefined8 *)puVar4;
  *(byte *)(lVar5 + 0x28) = param_7 & 1;
  *(undefined4 *)(lVar5 + 0x2c) = param_8;
  uVar6 = System_String__Concat_46c82e0(uVar6,param_5,0);
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Func_object____ctor_379de3c(lVar7,lVar5,*(undefined8 *)puVar3,0);
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
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar5 != 0) {
    uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar5,uVar6,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cb5a78);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(0,0,0);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
    }
    if ((lVar7 != 0) &&
       (lVar5 = (**(code **)(lVar7 + 0x18))
                          (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28)), lVar5 != 0)
       ) {
      UnityEngine_Object__set_name_43c72ec(lVar5,uVar6,0);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar7,uVar6,lVar5,*(undefined8 *)PTR_DAT_04cb5a88);
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


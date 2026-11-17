/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Toonish
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Toonish (System_String_o* name, UnityEngine_Color_o color, float spec, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$Toonish
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__Toonish (System_String_o* name,
   UnityEngine_Color_o color, float spec, const MethodInfo* method); */

long Dino_BusSand_View_MaterialLibrary__Toonish_23baa20
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04cbcb50;
  if ((bRam0000000004f9c99a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc878);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbcb58);
    FUN_02132f7c(PTR_DAT_04cbcb50);
    FUN_02132f7c(PTR_DAT_04cbcb60);
    bRam0000000004f9c99a = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar6,0);
  puVar4 = PTR_DAT_04cbcb60;
  puVar1 = PTR_DAT_04cbc878;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar6 + 0x10) = param_1;
  puVar3 = PTR_DAT_04cbcb58;
  *(undefined4 *)(lVar6 + 0x14) = param_2;
  puVar2 = PTR_DAT_04cb6dd0;
  uVar7 = *(undefined8 *)puVar4;
  *(undefined4 *)(lVar6 + 0x18) = param_3;
  *(undefined4 *)(lVar6 + 0x1c) = param_4;
  *(undefined4 *)(lVar6 + 0x20) = param_5;
  uVar7 = System_String__Concat_46c82e0(uVar7,param_6,0);
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Func_object____ctor_379de3c(lVar8,lVar6,*(undefined8 *)puVar3,0);
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
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar1;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 != 0) {
    uVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar6,uVar7,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cb5a78);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(0,0,0);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
    }
    if ((lVar8 != 0) &&
       (lVar6 = (**(code **)(lVar8 + 0x18))
                          (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28)), lVar6 != 0)
       ) {
      UnityEngine_Object__set_name_43c72ec(lVar6,uVar7,0);
      lVar8 = *(long *)puVar1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar1;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar8,uVar7,lVar6,*(undefined8 *)PTR_DAT_04cb5a88);
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


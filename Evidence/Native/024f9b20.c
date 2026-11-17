/* IL2CPP: Dino.BusSand.View.VehicleView$$SlotMaterial
UnityEngine_Material_o* Dino_BusSand_View_VehicleView__SlotMaterial (System_String_o* slot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$SlotMaterial
   UnityEngine_Material_o* Dino_BusSand_View_VehicleView__SlotMaterial (System_String_o* slot, const
   MethodInfo* method); */

long Dino_BusSand_View_VehicleView__SlotMaterial_23f9b20(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar2 = PTR_DAT_04cbde18;
  if ((bRam0000000004f9cad0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbdf80);
    FUN_02132f7c(PTR_DAT_04cbdf88);
    FUN_02132f7c(PTR_DAT_04cbdf90);
    FUN_02132f7c(PTR_DAT_04cb6e00);
    FUN_02132f7c(PTR_DAT_04cbdf98);
    FUN_02132f7c(PTR_DAT_04cb6e20);
    FUN_02132f7c(PTR_DAT_04cbdfa0);
    FUN_02132f7c(PTR_DAT_04cbde18);
    FUN_02132f7c(PTR_DAT_04cb6e38);
    bRam0000000004f9cad0 = 1;
  }
  puVar1 = PTR_DAT_04cb6dd0;
  uVar8 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)puVar2,0);
  puVar2 = PTR_DAT_04cbdf98;
  if ((uVar8 & 1) == 0) {
    uVar8 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb6e20,0);
    if ((uVar8 & 1) == 0) {
      uVar8 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb6e00,0);
      if ((uVar8 & 1) == 0) {
        uVar8 = System_String__op_Equality_46d1108(param_1,*(undefined8 *)PTR_DAT_04cb6e38,0);
        if ((uVar8 & 1) == 0) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar14 = 0;
          uVar13 = 0x3f000000;
          uVar9 = *(undefined8 *)PTR_DAT_04cbdf80;
          uVar10 = _UNK_00e20094;
          uVar11 = _UNK_00e20094;
          uVar12 = _UNK_00e205e8;
          goto LAB_024f9c80;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = *(undefined8 *)PTR_DAT_04cbdf88;
        uVar10 = _UNK_00e2038c;
        uVar11 = _UNK_00e205f8;
        uVar12 = _UNK_00e20174;
        uVar13 = _UNK_00e20994;
      }
      else {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = *(undefined8 *)PTR_DAT_04cbdfa0;
        uVar10 = 0x3f800000;
        uVar11 = _UNK_00e208e0;
        uVar12 = _UNK_00e20180;
        uVar13 = _UNK_00e1fea8;
      }
      puVar2 = PTR_DAT_04cbcb70;
      if ((bRam0000000004f9c99d & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cbc878,0);
        FUN_02132f7c(PTR_DAT_04cb6dd0);
        FUN_02132f7c(PTR_DAT_04cbcb78);
        FUN_02132f7c(PTR_DAT_04cbcb70);
        FUN_02132f7c(PTR_DAT_04cbcb80);
        bRam0000000004f9c99d = 1;
      }
      lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Object___ctor_4870e5c(lVar5,0);
      puVar1 = PTR_DAT_04cbcb80;
      puVar2 = PTR_DAT_04cbc878;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      *(undefined4 *)(lVar5 + 0x10) = uVar10;
      puVar4 = PTR_DAT_04cbcb78;
      *(undefined4 *)(lVar5 + 0x14) = uVar11;
      puVar3 = PTR_DAT_04cb6dd0;
      uVar6 = *(undefined8 *)puVar1;
      *(undefined4 *)(lVar5 + 0x18) = uVar12;
      *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
      *(undefined4 *)(lVar5 + 0x20) = uVar13;
      uVar9 = System_String__Concat_46c82e0(uVar6,uVar9,0);
      lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Func_object____ctor_379de3c(lVar7,lVar5,*(undefined8 *)puVar4,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      goto Dino_BusSand_View_MaterialLibrary__Get_23ba02c;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = *(undefined8 *)PTR_DAT_04cbdf90;
    uVar10 = _UNK_00e1fde8;
    uVar11 = _UNK_00e20808;
    uVar12 = _UNK_00e1fecc;
    uVar13 = _UNK_00e20180;
    uVar14 = _UNK_00e20180;
  }
  else {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar9 = *(undefined8 *)puVar2;
    uVar10 = _UNK_00e20a94;
    uVar11 = _UNK_00e20474;
    uVar12 = _UNK_00e20658;
    uVar13 = 0x3f000000;
    uVar14 = 0;
  }
LAB_024f9c80:
  puVar2 = PTR_DAT_04cbc870;
  if ((bRam0000000004f9c99c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc878,0);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbc880);
    FUN_02132f7c(PTR_DAT_04cbc870);
    FUN_02132f7c(PTR_DAT_04cbc888);
    bRam0000000004f9c99c = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Object___ctor_4870e5c(lVar5,0);
  puVar2 = PTR_DAT_04cbc888;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  *(undefined4 *)(lVar5 + 0x10) = uVar10;
  puVar3 = PTR_DAT_04cbc878;
  *(undefined4 *)(lVar5 + 0x14) = uVar11;
  puVar4 = PTR_DAT_04cbc880;
  *(undefined4 *)(lVar5 + 0x18) = uVar12;
  puVar1 = PTR_DAT_04cb6dd0;
  uVar6 = *(undefined8 *)puVar2;
  *(undefined4 *)(lVar5 + 0x1c) = 0x3f800000;
  *(undefined4 *)(lVar5 + 0x20) = uVar13;
  *(undefined4 *)(lVar5 + 0x24) = uVar14;
  uVar9 = System_String__Concat_46c82e0(uVar6,uVar9,0);
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Func_object____ctor_379de3c(lVar7,lVar5,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
Dino_BusSand_View_MaterialLibrary__Get_23ba02c:
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
                      (lVar5,uVar9,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cb5a78);
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
      UnityEngine_Object__set_name_43c72ec(lVar5,uVar9,0);
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
      if (lVar7 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar7,uVar9,lVar5,*(undefined8 *)PTR_DAT_04cb5a88);
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


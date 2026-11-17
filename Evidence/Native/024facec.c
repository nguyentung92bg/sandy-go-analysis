/* IL2CPP: Dino.BusSand.View.VehicleView$$ArrowMaterial
UnityEngine_Material_o* Dino_BusSand_View_VehicleView__ArrowMaterial (Dino_BusSand_View_VehicleView_o* __this, bool can, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$ArrowMaterial
   UnityEngine_Material_o* Dino_BusSand_View_VehicleView__ArrowMaterial
   (Dino_BusSand_View_VehicleView_o* __this, bool can, const MethodInfo* method); */

long Dino_BusSand_View_VehicleView__ArrowMaterial_23facec(long param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if ((bRam0000000004f9cada & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04cbdfd8);
    FUN_02132f7c(PTR_DAT_04cbdfe0);
    FUN_02132f7c(PTR_DAT_04cb9428);
    FUN_02132f7c(PTR_DAT_04cbdfe8);
    FUN_02132f7c(PTR_DAT_04cbdff0);
    FUN_02132f7c(PTR_DAT_04cbdff8);
    bRam0000000004f9cada = 1;
  }
  puVar4 = PTR_DAT_04cb6dd0;
  if (*(char *)(param_1 + 0xb8) == '\0') {
    if ((param_2 & 1) == 0) {
      puVar11 = (undefined8 *)PTR_DAT_04cbdff0;
      uVar12 = _UNK_00e1fdd0;
      uVar13 = _UNK_00e20374;
      uVar14 = _UNK_00e1fde8;
      if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar11 = (undefined8 *)PTR_DAT_04cbdff0;
        uVar12 = _UNK_00e1fdd0;
        uVar13 = _UNK_00e20374;
        uVar14 = _UNK_00e1fde8;
      }
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      puVar11 = (undefined8 *)PTR_DAT_04cb9428;
      uVar12 = 0x3f800000;
      uVar13 = 0x3f800000;
      uVar14 = 0x3f800000;
    }
    puVar4 = PTR_DAT_04cbc890;
    uVar10 = *puVar11;
    if ((bRam0000000004f9c999 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbc878);
      FUN_02132f7c(PTR_DAT_04cb6dd0);
      FUN_02132f7c(PTR_DAT_04cbc898);
      FUN_02132f7c(PTR_DAT_04cbc890);
      FUN_02132f7c(PTR_DAT_04cbc8a0);
      bRam0000000004f9c999 = 1;
    }
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_Object___ctor_4870e5c(lVar6,0);
    puVar2 = PTR_DAT_04cbc8a0;
    puVar4 = PTR_DAT_04cbc878;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined4 *)(lVar6 + 0x10) = uVar12;
    puVar5 = PTR_DAT_04cbc898;
    *(undefined4 *)(lVar6 + 0x14) = uVar13;
    puVar3 = PTR_DAT_04cb6dd0;
    *(undefined4 *)(lVar6 + 0x18) = uVar14;
    *(undefined4 *)(lVar6 + 0x1c) = 0x3f800000;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),0);
    uVar7 = *(undefined8 *)puVar2;
    *(undefined1 *)(lVar6 + 0x28) = 0;
    *(undefined4 *)(lVar6 + 0x2c) = 2;
    uVar10 = System_String__Concat_46c82e0(uVar7,uVar10,0);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_Func_object____ctor_379de3c(lVar8,lVar6,*(undefined8 *)puVar5,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
  }
  else {
    uVar9 = Dino_BusSand_View_VehicleView__get_LightPaint_23fa1dc(param_1);
    iVar1 = *(int *)(*(long *)puVar4 + 0xe4);
    if ((uVar9 & 1) == 0) {
      if ((param_2 & 1) != 0) {
        if (iVar1 == 0) {
          thunk_FUN_0218fdac();
        }
        puVar4 = PTR_DAT_04cbcb70;
        uVar10 = *(undefined8 *)PTR_DAT_04cbdfe0;
        if ((bRam0000000004f9c99d & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cbc878,0);
          FUN_02132f7c(PTR_DAT_04cb6dd0);
          FUN_02132f7c(PTR_DAT_04cbcb78);
          FUN_02132f7c(PTR_DAT_04cbcb70);
          FUN_02132f7c(PTR_DAT_04cbcb80);
          bRam0000000004f9c99d = 1;
        }
        lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        System_Object___ctor_4870e5c(lVar6,0);
        puVar2 = PTR_DAT_04cbcb80;
        puVar4 = PTR_DAT_04cbc878;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        *(undefined4 *)(lVar6 + 0x10) = 0x3f800000;
        puVar5 = PTR_DAT_04cbcb78;
        *(undefined4 *)(lVar6 + 0x14) = 0x3f800000;
        puVar3 = PTR_DAT_04cb6dd0;
        uVar7 = *(undefined8 *)puVar2;
        *(undefined4 *)(lVar6 + 0x18) = 0x3f800000;
        *(undefined4 *)(lVar6 + 0x1c) = 0x3f800000;
        *(undefined4 *)(lVar6 + 0x20) = 0x3e800000;
        uVar10 = System_String__Concat_46c82e0(uVar7,uVar10,0);
        lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        System_Func_object____ctor_379de3c(lVar8,lVar6,*(undefined8 *)puVar5,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        goto Dino_BusSand_View_MaterialLibrary__Get_23ba02c;
      }
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
      uVar15 = 0x3f000000;
      uVar10 = *(undefined8 *)PTR_DAT_04cbdff8;
      uVar12 = _UNK_00e20994;
      uVar13 = _UNK_00e1fdd0;
      uVar14 = _UNK_00e200f8;
    }
    else if ((param_2 & 1) == 0) {
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = *(undefined8 *)PTR_DAT_04cbdfe8;
      uVar15 = 0x3f000000;
      uVar12 = _UNK_00e2094c;
      uVar13 = _UNK_00e20664;
      uVar14 = _UNK_00e20b08;
    }
    else {
      if (iVar1 == 0) {
        thunk_FUN_0218fdac();
      }
      uVar10 = *(undefined8 *)PTR_DAT_04cbdfd8;
      uVar12 = _UNK_00e205f0;
      uVar13 = _UNK_00e20004;
      uVar14 = _UNK_00e207cc;
      uVar15 = _UNK_00e20094;
    }
    puVar4 = PTR_DAT_04cbc870;
    if ((bRam0000000004f9c99c & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbc878,0);
      FUN_02132f7c(PTR_DAT_04cb6dd0);
      FUN_02132f7c(PTR_DAT_04cbc880);
      FUN_02132f7c(PTR_DAT_04cbc870);
      FUN_02132f7c(PTR_DAT_04cbc888);
      bRam0000000004f9c99c = 1;
    }
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
    System_Object___ctor_4870e5c(lVar6,0);
    puVar4 = PTR_DAT_04cbc888;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    *(undefined4 *)(lVar6 + 0x10) = uVar12;
    puVar3 = PTR_DAT_04cbc878;
    *(undefined4 *)(lVar6 + 0x14) = uVar13;
    puVar5 = PTR_DAT_04cbc880;
    *(undefined4 *)(lVar6 + 0x18) = uVar14;
    puVar2 = PTR_DAT_04cb6dd0;
    uVar7 = *(undefined8 *)puVar4;
    *(undefined4 *)(lVar6 + 0x1c) = 0x3f800000;
    *(undefined4 *)(lVar6 + 0x20) = uVar15;
    *(undefined4 *)(lVar6 + 0x24) = 0;
    uVar10 = System_String__Concat_46c82e0(uVar7,uVar10,0);
    lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Func_object____ctor_379de3c(lVar8,lVar6,*(undefined8 *)puVar5,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
  }
Dino_BusSand_View_MaterialLibrary__Get_23ba02c:
  puVar4 = PTR_DAT_04cb6dd0;
  if ((bRam0000000004f9c9a3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5a78);
    FUN_02132f7c(PTR_DAT_04cb5a88);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9a3 = 1;
  }
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar6 = *(long *)puVar4;
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
  if (lVar6 != 0) {
    uVar9 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                      (lVar6,uVar10,&stack0xffffffffffffffd8,*(undefined8 *)PTR_DAT_04cb5a78);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(0,0,0);
      if ((uVar9 & 1) != 0) {
        return 0;
      }
    }
    if ((lVar8 != 0) &&
       (lVar6 = (**(code **)(lVar8 + 0x18))
                          (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28)), lVar6 != 0)
       ) {
      UnityEngine_Object__set_name_43c72ec(lVar6,uVar10,0);
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar4;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
      if (lVar8 != 0) {
        System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                  (lVar8,uVar10,lVar6,*(undefined8 *)PTR_DAT_04cb5a88);
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


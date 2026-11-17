/* IL2CPP: Dino.BusSand.View.VehicleView$$TickMark
UnityEngine_Transform_o* Dino_BusSand_View_VehicleView__TickMark (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickMark
   UnityEngine_Transform_o* Dino_BusSand_View_VehicleView__TickMark
   (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method); */

long Dino_BusSand_View_VehicleView__TickMark_23fbc08(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  puVar3 = PTR_DAT_04cbc460;
  if ((bRam0000000004f9cae6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc460);
    FUN_02132f7c(PTR_DAT_04cbe010);
    FUN_02132f7c(PTR_DAT_04caf2a0);
    FUN_02132f7c(PTR_DAT_04caf3c8);
    FUN_02132f7c(PTR_DAT_04cbe018);
    FUN_02132f7c(PTR_DAT_04cbe020);
    bRam0000000004f9cae6 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar7 = *(long *)puVar3;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x80);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  puVar2 = PTR_DAT_04caf2a0;
  puVar1 = PTR_DAT_04caa070;
  uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar12 = Dino_BusSand_View_VehicleView__TickMesh_23fc010(_UNK_00e20004);
    puVar11 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
    *puVar11 = uVar12;
    thunk_FUN_02134474(puVar11,uVar12);
    uVar12 = Dino_BusSand_View_VehicleView__TickMesh_23fc010(_UNK_00e1ff68);
    puVar11 = (undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x88);
    *puVar11 = uVar12;
    thunk_FUN_02134474(puVar11,uVar12);
  }
  lVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  UnityEngine_GameObject___ctor_43c20cc(lVar7,*(undefined8 *)puVar2,0);
  if ((lVar7 != 0) &&
     (lVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar7,0), puVar1 = PTR_DAT_04cb6dd0,
     lVar7 != 0)) {
    UnityEngine_Transform__SetParent_43d1e34(lVar7,*(undefined8 *)(param_1 + 0x88),0,0);
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar9 = *(long *)puVar3;
    }
    puVar6 = PTR_DAT_04cbe020;
    puVar5 = PTR_DAT_04cbe018;
    puVar4 = PTR_DAT_04cbe010;
    puVar2 = PTR_DAT_04caf3c8;
    uVar12 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x88);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar10 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                       (_UNK_00e20a94,_UNK_00e20324,_UNK_00e20658,0x3f800000,*(undefined8 *)puVar4,0
                        ,0,2,0);
    Dino_BusSand_View_VehicleView__AddTickPart_23fc580
              (_UNK_00e20844,lVar7,*(undefined8 *)puVar6,uVar12,uVar10);
    uVar10 = *(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x80);
    uVar12 = Dino_BusSand_View_MaterialLibrary__Unlit_23b1214
                       (_UNK_00e1fdd8,_UNK_00e208e0,_UNK_00e20390,0x3f800000,*(undefined8 *)puVar5,0
                        ,0,3,0);
    Dino_BusSand_View_VehicleView__AddTickPart_23fc580(0,lVar7,*(undefined8 *)puVar2,uVar10,uVar12);
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


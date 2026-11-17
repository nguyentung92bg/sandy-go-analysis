/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$VehiclesScreenRect
bool Dino_BusSand_App_UI_GuideDimHoles__VehiclesScreenRect (System_Collections_Generic_IEnumerable_Transform__o* vehicles, UnityEngine_Rect_o* rect, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023c7a18) */
/* IL2CPP: Dino.BusSand.App.UI.GuideDimHoles$$VehiclesScreenRect
   bool Dino_BusSand_App_UI_GuideDimHoles__VehiclesScreenRect
   (System_Collections_Generic_IEnumerable_Transform__o* vehicles, UnityEngine_Rect_o* rect, const
   MethodInfo* method); */

undefined8
Dino_BusSand_App_UI_GuideDimHoles__VehiclesScreenRect_22c7654(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  uint uVar15;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = PTR_DAT_04cb68f0;
  if ((bRam0000000004f9c35f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb68e8);
    FUN_02132f7c(PTR_DAT_04cb68f0);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cabad0);
    FUN_02132f7c(PTR_DAT_04cabad8);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c35f = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar7 = Dino_BusSand_App_UI_GuideDimHoles__get_Cam_22c6770();
  uStack_60 = 0xff7fffffff7fffff;
  uStack_58 = 0x7f7fffff7f7fffff;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  uVar9 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((param_1 != (long *)0x0) && ((uVar8 & 1) != 0)) {
    lVar13 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar8 != 0) {
      piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04cabad0) {
          puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
          goto LAB_023c77a8;
        }
        uVar8 = uVar8 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_0216b7a4(param_1,*(long *)PTR_DAT_04cabad0,0);
LAB_023c77a8:
    plVar11 = (long *)(*(code *)*puVar10)(param_1,puVar10[1]);
    puVar4 = PTR_DAT_04cb68e8;
    puVar3 = PTR_DAT_04cabad8;
    puVar2 = PTR_DAT_04ca9c08;
    uVar15 = 0;
    do {
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_023c7830;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar2,0);
LAB_023c7830:
      uVar8 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_023c79c0;
        lVar13 = *plVar11;
        uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar8 == 0) goto LAB_023c7998;
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_023c7980;
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_023c7894;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)puVar3,0);
LAB_023c7894:
      lVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
      if ((uVar8 & 1) == 0) {
LAB_023c78fc:
        uVar9 = 0;
      }
      else {
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar8 = UnityEngine_GameObject__get_activeInHierarchy_43c1580(lVar12,0);
        if ((uVar8 & 1) == 0) goto LAB_023c78fc;
        uVar9 = UnityEngine_Component__GetComponent_object__26f97e8(lVar13,*(undefined8 *)puVar4);
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = Dino_BusSand_App_UI_GuideDimHoles__CarRect_22c7234
                          (uVar7,uVar9,&uStack_58,&uStack_60);
        uVar15 = uVar6 | uVar15;
      }
    } while( true );
  }
  goto LAB_023c79e4;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar14 = piVar14 + 4;
    if (uVar8 == 0) break;
LAB_023c7980:
    if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_023c79b4;
    }
  }
LAB_023c7998:
  puVar10 = (undefined8 *)FUN_0216b7a4(plVar11,*(long *)PTR_DAT_04ca9b30,0);
LAB_023c79b4:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_023c79c0:
  if ((uVar15 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
    uStack_88 = CONCAT44((float)((ulong)uStack_60 >> 0x20) - (float)((ulong)uStack_58 >> 0x20),
                         (float)uStack_60 - (float)uStack_58);
    uStack_90 = uStack_58;
  }
LAB_023c79e4:
  param_2[1] = uStack_88;
  *param_2 = uStack_90;
  return uVar9;
}


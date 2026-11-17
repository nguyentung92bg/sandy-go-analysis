/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$SetLayer
void Dino_BusSand_App_UI_HomeStage__SetLayer (UnityEngine_Transform_o* t, int32_t layer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023ef6d8) */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$SetLayer
   void Dino_BusSand_App_UI_HomeStage__SetLayer (UnityEngine_Transform_o* t, int32_t layer, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__SetLayer_22ef448(long param_1,undefined4 param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((bRam0000000004f9c45d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb74a8);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cad740);
    bRam0000000004f9c45d = 1;
  }
  if ((param_1 == 0) ||
     (lVar6 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0), puVar5 = PTR_DAT_04cb74a8,
     puVar4 = PTR_DAT_04cad740, puVar3 = PTR_DAT_04ca9c08, puVar2 = PTR_DAT_04ca9b30, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_GameObject__set_layer_43c11cc(lVar6,param_2,0);
  plVar7 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(param_1,0);
  do {
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = *plVar7;
    lVar6 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_023ef564;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,lVar6,0);
LAB_023ef564:
    uVar11 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar11 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_0216e7a0(plVar7,*(undefined8 *)puVar2);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar10 = *plVar7;
      lVar6 = *(long *)puVar2;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_023ef680;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar10 = *plVar7;
    lVar6 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar6) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_023ef5cc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,lVar6,1);
LAB_023ef5cc:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (plVar9 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_021335a4(plVar9);
      }
    }
    Dino_BusSand_App_UI_HomeStage__SetLayer_22ef448(plVar9,param_2);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == lVar6) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_023ef69c;
    }
  }
LAB_023ef680:
  puVar8 = (undefined8 *)FUN_0216b7a4(plVar7,lVar6,0);
LAB_023ef69c:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


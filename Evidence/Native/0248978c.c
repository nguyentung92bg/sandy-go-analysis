/* IL2CPP: Dino.BusSand.Haptics$$Vibrator
UnityEngine_AndroidJavaObject_o* Dino_BusSand_Haptics__Vibrator (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02489a18) */
/* WARNING: Removing unreachable block (ram,0x02489be8) */
/* WARNING: Removing unreachable block (ram,0x02489bdc) */
/* WARNING: Removing unreachable block (ram,0x02489b6c) */
/* WARNING: Removing unreachable block (ram,0x02489bd4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: Dino.BusSand.Haptics$$Vibrator
   UnityEngine_AndroidJavaObject_o* Dino_BusSand_Haptics__Vibrator (const MethodInfo* method); */

long Dino_BusSand_Haptics__Vibrator_238978c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  
  puVar2 = PTR_DAT_04cab238;
  if ((bRam0000000004f9c886 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9de8);
    FUN_02132f7c(PTR_DAT_04caa250);
    FUN_02132f7c(PTR_DAT_04ca9df8);
    FUN_02132f7c(PTR_DAT_04cbbd08);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c20);
    FUN_02132f7c(PTR_DAT_04cbbd10);
    FUN_02132f7c(PTR_DAT_04caa268);
    FUN_02132f7c(PTR_DAT_04cbbd18);
    FUN_02132f7c(PTR_DAT_04cab400);
    FUN_02132f7c(PTR_DAT_04cbbd20);
    FUN_02132f7c(PTR_DAT_04caa2a0);
    bRam0000000004f9c886 = 1;
  }
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar5 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_04ca9de8;
  lVar11 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar11 == 0) {
    plVar6 = (long *)thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04ca9de8);
    UnityEngine_AndroidJavaClass___ctor_432cda0(plVar6,*(undefined8 *)PTR_DAT_04caa268,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    plVar7 = (long *)UnityEngine_AndroidJavaObject__GetStatic_object__264e0a8
                               (plVar6,*(undefined8 *)PTR_DAT_04caa2a0,
                                *(undefined8 *)PTR_DAT_04ca9df8);
    plVar8 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04ca9c20,1);
    puVar3 = PTR_DAT_04cbbd18;
    if (plVar8 == (long *)0x0) {
LAB_02489bcc:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((*(long *)PTR_DAT_04cbbd18 != 0) &&
       (lVar5 = thunk_FUN_0216e7a0(*(long *)PTR_DAT_04cbbd18,*(undefined8 *)(*plVar8 + 0x40)),
       lVar5 == 0)) {
      uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar9,0);
    }
    if ((int)plVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar8[4] = *(long *)puVar3;
    thunk_FUN_02134474();
    if (plVar7 == (long *)0x0) goto LAB_02489bcc;
    uVar9 = UnityEngine_AndroidJavaObject__Call_object__264c1e8
                      (plVar7,*(undefined8 *)PTR_DAT_04cab400,plVar8,*(undefined8 *)PTR_DAT_04caa250
                      );
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    puVar10 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
    *puVar10 = uVar9;
    thunk_FUN_02134474(puVar10,uVar9);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar10 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02489a00;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04ca9b30,0);
LAB_02489a00:
      (*(code *)*puVar10)(plVar7,puVar10[1]);
    }
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar10 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02489a80;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04ca9b30,0);
LAB_02489a80:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
    }
    plVar6 = (long *)thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_AndroidJavaClass___ctor_432cda0(plVar6,*(undefined8 *)PTR_DAT_04cbbd20,0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar4 = UnityEngine_AndroidJavaObject__GetStatic_int__264e068
                      (plVar6,*(undefined8 *)PTR_DAT_04cbbd10,*(undefined8 *)PTR_DAT_04cbbd08);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x28) = uVar4;
    if (plVar6 != (long *)0x0) {
      lVar5 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_04ca9b30) {
            puVar10 = (undefined8 *)(lVar5 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_02489b7c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar10 = (undefined8 *)FUN_0216b7a4(plVar6,*(long *)PTR_DAT_04ca9b30,0);
LAB_02489b7c:
      (*(code *)*puVar10)(plVar6,puVar10[1]);
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) != 0) goto LAB_02489bac;
  }
  else if (*(int *)(lVar5 + 0xe4) != 0) {
    return lVar11;
  }
  thunk_FUN_0218fdac();
  lVar5 = *(long *)puVar2;
LAB_02489bac:
  return *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
}


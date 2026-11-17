/* IL2CPP: Dino.BusSand.Core.LevelData$$ColorOf
UnityEngine_Color32_o Dino_BusSand_Core_LevelData__ColorOf (Dino_BusSand_Core_LevelData_o* __this, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelData$$ColorOf
   UnityEngine_Color32_o Dino_BusSand_Core_LevelData__ColorOf (Dino_BusSand_Core_LevelData_o*
   __this, System_String_o* name, const MethodInfo* method); */

uint Dino_BusSand_Core_LevelData__ColorOf_240ca28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_1 + 0x38);
  if (lVar8 != 0) {
    lVar10 = 4;
    do {
      puVar1 = PTR_DAT_04cbbfb8;
      if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)(lVar10 - 4U)) {
        if ((bRam0000000004f9cb48 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cbbfb8);
          bRam0000000004f9cb48 = 1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        bVar2 = Dino_BusSand_Core_SandPalette__Id_2419278(param_2,0);
        if (bVar2 == 0) {
          return 0xffff00ff;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04cbbfb8;
        if ((bRam0000000004f9cb83 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cbbfb8,0);
          bRam0000000004f9cb83 = 1;
        }
        lVar8 = *(long *)puVar1;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar1;
        }
        if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x30) != '\0') goto LAB_02519808;
        uVar7 = 0;
        lVar10 = 0x100000000;
        goto LAB_02519764;
      }
      if ((ulong)*(uint *)(lVar8 + 0x18) <= lVar10 - 4U) {
LAB_0250cab8:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar7 = System_String__op_Equality_46d1108(*(undefined8 *)(lVar8 + lVar10 * 8),param_2,0);
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)(param_1 + 0x40);
        if (lVar8 != 0) {
          if ((int)lVar10 - 4U < *(uint *)(lVar8 + 0x18)) {
            thunk_FUN_02134474(&stack0xffffffffffffffe8,*(undefined8 *)(lVar8 + lVar10 * 8));
            uVar3 = Dino_BusSand_Core_LevelData___ParseHex_g__H_14_0_2410c1c
                              (0,&stack0xffffffffffffffe8);
            uVar4 = Dino_BusSand_Core_LevelData___ParseHex_g__H_14_0_2410c1c
                              (2,&stack0xffffffffffffffe8);
            iVar5 = Dino_BusSand_Core_LevelData___ParseHex_g__H_14_0_2410c1c
                              (4,&stack0xffffffffffffffe8);
            return (uVar4 & 0xff) << 8 | iVar5 << 0x10 | uVar3 & 0xff | 0xff000000;
          }
          goto LAB_0250cab8;
        }
        break;
      }
      lVar8 = *(long *)(param_1 + 0x38);
      lVar10 = lVar10 + 1;
    } while (lVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02519764:
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar8 = *(long *)puVar1;
  }
  lVar9 = *(long *)(lVar8 + 0xb8);
  if (*(long *)(lVar9 + 8) == 0) goto LAB_02519860;
  if ((long)*(int *)(*(long *)(lVar9 + 8) + 0x18) <= (long)uVar7) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar8 = *(long *)puVar1;
      lVar9 = *(long *)(lVar8 + 0xb8);
    }
    *(undefined1 *)(lVar9 + 0x30) = 1;
LAB_02519808:
    if (bVar2 < 0x41) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar1;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x28);
      if (lVar8 == 0) {
LAB_02519860:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      if (*(uint *)(lVar8 + 0x18) <= (uint)bVar2) {
LAB_02519864:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      uVar3 = *(uint *)(lVar8 + (ulong)bVar2 * 4 + 0x20);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
  }
  lVar8 = *(long *)(lVar9 + 0x18);
  if (lVar8 == 0) goto LAB_02519860;
  if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_02519864;
  lVar9 = *(long *)(lVar9 + 0x28);
  uVar6 = Dino_BusSand_Core_LevelData__ParseHex_2410b28(*(undefined8 *)(lVar8 + uVar7 * 8 + 0x20),0)
  ;
  if (lVar9 == 0) goto LAB_02519860;
  uVar7 = uVar7 + 1;
  if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_02519864;
  lVar8 = lVar10 >> 0x1e;
  lVar10 = lVar10 + 0x100000000;
  *(undefined4 *)(lVar9 + lVar8 + 0x20) = uVar6;
  lVar8 = *(long *)puVar1;
  goto LAB_02519764;
}


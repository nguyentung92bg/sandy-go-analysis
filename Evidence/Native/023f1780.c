/* IL2CPP: Dino.BusSand.App.UI.HomeToonBusArt$$Load
Dino_BusSand_App_UI_HomeToonBusArt_o* Dino_BusSand_App_UI_HomeToonBusArt__Load (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonBusArt$$Load
   Dino_BusSand_App_UI_HomeToonBusArt_o* Dino_BusSand_App_UI_HomeToonBusArt__Load (const MethodInfo*
   method); */

long Dino_BusSand_App_UI_HomeToonBusArt__Load_22f1780(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  puVar4 = PTR_DAT_04cb7748;
  puVar3 = PTR_DAT_04cb7740;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c46c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7750);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb7748);
    FUN_02132f7c(PTR_DAT_04cb7758);
    FUN_02132f7c(PTR_DAT_04cb7740);
    bRam0000000004f9c46c = 1;
  }
  lVar5 = UnityEngine_Resources__Load_object__2891e2c(*(undefined8 *)puVar3,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
  uVar7 = 0;
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (lVar5 != 0) {
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
    if ((uVar7 & 1) != 0) {
      return 0;
    }
    lVar8 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb7758,2);
    uVar7 = 0;
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) != 0) {
        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
        thunk_FUN_02134474((undefined8 *)(lVar8 + 0x20));
        if ((*(uint *)(lVar8 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
          thunk_FUN_02134474((undefined8 *)(lVar8 + 0x28));
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (0 < (int)uVar1) {
            lVar11 = 0;
            do {
              if (uVar1 <= (uint)lVar11) goto LAB_023f1a0c;
              lVar10 = *(long *)(lVar8 + 0x20 + lVar11 * 8);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
              if ((uVar7 & 1) != 0) {
                return 0;
              }
              if (lVar10 == 0) goto LAB_023f1a08;
              uVar7 = UnityEngine_Shader__get_isSupported_43755b4(lVar10,0);
              if ((uVar7 & 1) == 0) {
                return 0;
              }
              uVar1 = *(uint *)(lVar8 + 0x18);
              lVar11 = lVar11 + 1;
            } while ((int)lVar11 < (int)uVar1);
          }
          uVar7 = 0;
          if (*(long *)(lVar5 + 0x18) != 0) {
            lVar8 = UnityEngine_GameObject__GetComponentInChildren_object__275a9b4
                              (*(long *)(lVar5 + 0x18),1,*(undefined8 *)PTR_DAT_04cb7750);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar2);
            }
            uVar6 = UnityEngine_Object__op_Equality_43c6f30(lVar8,0,0);
            uVar7 = 0;
            if ((uVar6 & 1) != 0) {
              return 0;
            }
            if (lVar8 != 0) {
              uVar9 = UnityEngine_Renderer__get_sharedMaterial_43743c8(lVar8,0);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar2);
              }
              uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
              if ((uVar7 & 1) != 0) {
                return 0;
              }
              lVar8 = UnityEngine_Renderer__get_sharedMaterial_43743c8(lVar8,0);
              uVar7 = 0;
              if (lVar8 != 0) {
                lVar8 = UnityEngine_Material__get_shader_437b8d4(lVar8,0);
                uVar7 = 0;
                if (lVar8 != 0) {
                  uVar7 = UnityEngine_Shader__get_isSupported_43755b4(lVar8,0);
                  if ((uVar7 & 1) == 0) {
                    return 0;
                  }
                  return lVar5;
                }
              }
            }
          }
          goto LAB_023f1a08;
        }
      }
LAB_023f1a0c:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_023f1a08:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(uVar7);
}


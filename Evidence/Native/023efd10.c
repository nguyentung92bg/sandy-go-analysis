/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$QaFace
void Dino_BusSand_App_UI_HomeStage__QaFace (Dino_BusSand_App_UI_HomeStage_o* __this, System_String_o* pose, float seconds, System_Nullable_Vector2__o look, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$QaFace
   void Dino_BusSand_App_UI_HomeStage__QaFace (Dino_BusSand_App_UI_HomeStage_o* __this,
   System_String_o* pose, float seconds, System_Nullable_Vector2__o look, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_HomeStage__QaFace_22efd10
               (float param_1,long param_2,undefined8 param_3,ulong param_4,undefined4 param_5)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  lVar5 = *(long *)(param_2 + 0x78);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uStack_70 = param_4;
  uStack_68 = param_5;
  if ((bRam0000000004f9c409 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cb71c8);
    FUN_02132f7c(PTR_DAT_04cb4df0);
    FUN_02132f7c(PTR_DAT_04cb71d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb71d8);
    FUN_02132f7c(PTR_DAT_04cb71e0);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    FUN_02132f7c(PTR_DAT_04cb71f8);
    bRam0000000004f9c409 = 1;
  }
  puVar1 = PTR_DAT_04ca9ac8;
  if (*(long *)(lVar5 + 0x18) == 0) {
    return;
  }
  uVar9 = *(undefined8 *)PTR_DAT_04cb71c8;
  if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  plVar2 = (long *)System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x6d8))
                               (plVar2,param_3,0x18,*(undefined8 *)(*plVar2 + 0x6e0));
    uVar3 = System_Reflection_FieldInfo__op_Equality_47732d8(plVar2,0,0);
    if ((uVar3 & 1) != 0) {
LAB_023e0484:
      uVar9 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb71f8,param_3,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      puVar1 = PTR_DAT_04ca9af8;
      uVar10 = 0;
      if ((bRam0000000004fa626c & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9af8,0);
        FUN_02132f7c(PTR_DAT_04ce7050);
        bRam0000000004fa626c = 1;
        uVar10 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar10 = extraout_x1_00;
      }
      if (cRam0000000004f9d848 == '\0') {
        FUN_02132f7c(PTR_DAT_04ca9af8,uVar10);
        cRam0000000004f9d848 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar1;
      }
      plVar2 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar5 = *plVar2;
      uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04ce7050) {
            puVar6 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_04457b18;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_0216b7a4(plVar2,*(long *)PTR_DAT_04ce7050,3);
LAB_04457b18:
                    /* WARNING: Could not recover jumptable at 0x04457b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(plVar2,2,uVar9,puVar6[1]);
      return;
    }
    if (plVar2 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar2 + 0x268))(plVar2,*(undefined8 *)(*plVar2 + 0x270));
      uVar10 = *(undefined8 *)PTR_DAT_04cb71d8;
      if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)(puVar1 + 0xe0));
      }
      uVar10 = System_Type__GetTypeFromHandle_483f0b4(uVar10,0);
      uVar3 = System_Type__op_Inequality_48487c8(uVar9,uVar10,0);
      if ((uVar3 & 1) != 0) goto LAB_023e0484;
      lVar8 = *(long *)(lVar5 + 0x20);
      lVar4 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,1);
      plVar2 = (long *)(**(code **)(*plVar2 + 0x2e8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x2f0));
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(long *)(*plVar2 + 0x40) != *(long *)(*(long *)PTR_DAT_04cb71e0 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4();
        }
        puVar6 = (undefined8 *)thunk_FUN_0216e9e4();
        uStack_58 = puVar6[1];
        uStack_60 = *puVar6;
        uStack_50 = *(undefined4 *)(puVar6 + 2);
        System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                  (param_1,&uStack_88,&uStack_60,*(undefined8 *)PTR_DAT_04cb71f0);
        if (lVar4 != 0) {
          if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          *(undefined8 *)(lVar4 + 0x30) = uStack_78;
          *(undefined8 *)(lVar4 + 0x28) = uStack_80;
          *(undefined8 *)(lVar4 + 0x20) = uStack_88;
          if (lVar8 != 0) {
            Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar8,lVar4,0);
            if ((param_4 & 0xff) == 0) {
              uVar9 = *(undefined8 *)(lVar5 + 0x38);
              if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
              if ((uVar3 & 1) == 0) goto LAB_023e0644;
              if (*(long *)(lVar5 + 0x38) != 0) {
                lVar8 = *(long *)(lVar5 + 0x20);
                lVar4 = UnityEngine_Component__get_transform_43bcd18(*(long *)(lVar5 + 0x38),0);
                if ((lVar4 != 0) &&
                   (UnityEngine_Transform__get_position_43d0e48(lVar4,0), lVar8 != 0)) {
                  Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c(lVar8,0);
                  goto LAB_023e0644;
                }
              }
            }
            else {
              lVar4 = *(long *)(lVar5 + 0x20);
              System_Nullable_Vector2___get_Value_2bd0a60
                        (&uStack_70,*(undefined8 *)PTR_DAT_04cb71d0);
              if (lVar4 != 0) {
                Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200(lVar4,0);
LAB_023e0644:
                param_1 = *(float *)(lVar5 + 0x88) + param_1;
                *(float *)(lVar5 + 0xf8) = param_1;
                *(float *)(lVar5 + 0xd0) = *(float *)(lVar5 + 0x88);
                *(float *)(lVar5 + 0xd4) = param_1 + 5.0;
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


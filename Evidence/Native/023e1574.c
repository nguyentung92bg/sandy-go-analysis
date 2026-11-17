/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Blink
void Dino_BusSand_App_UI_HomeBus__Blink (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Blink
   void Dino_BusSand_App_UI_HomeBus__Blink (Dino_BusSand_App_UI_HomeBus_o* __this, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_HomeBus__Blink_22e1574(long param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000004f9c40c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    bRam0000000004f9c40c = 1;
  }
  fVar1 = _UNK_00e207dc;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x88) + fVar1;
  puVar4 = PTR_DAT_04cb7200;
  puVar3 = PTR_DAT_04cb71f0;
  puVar2 = PTR_DAT_04cb71e8;
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    Dino_BusSand_App_UI_HomeToonFace__Wink_22e51ac(*(long *)(param_1 + 0x20),0,0);
    lVar8 = *(long *)(param_1 + 0x20);
    lVar5 = FUN_02133068(*(undefined8 *)puVar2,1);
    lVar7 = *(long *)puVar4;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
      lVar7 = *(long *)puVar4;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_48 = *(undefined8 *)(lVar7 + 0x5c);
    uStack_50 = *(undefined8 *)(lVar7 + 0x54);
    uStack_40 = *(undefined4 *)(lVar7 + 100);
    uStack_58 = 0;
    System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
              (_UNK_00e1fea8,&uStack_68,&uStack_50,*(undefined8 *)puVar3);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
      *(undefined8 *)(lVar5 + 0x30) = uStack_58;
      *(undefined8 *)(lVar5 + 0x28) = uStack_60;
      *(undefined8 *)(lVar5 + 0x20) = uStack_68;
      puVar2 = PTR_DAT_04ca9ae8;
      if (lVar8 != 0) {
        Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar8,lVar5,0);
        uVar9 = *(undefined8 *)(param_1 + 0x38);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
        if ((uVar6 & 1) == 0) {
LAB_023e1714:
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x88);
          return;
        }
        if (*(long *)(param_1 + 0x38) != 0) {
          lVar7 = *(long *)(param_1 + 0x20);
          lVar5 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_1 + 0x38),0);
          if ((lVar5 != 0) && (UnityEngine_Transform__get_position_43d0e48(lVar5,0), lVar7 != 0)) {
            Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c(lVar7,0);
            goto LAB_023e1714;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


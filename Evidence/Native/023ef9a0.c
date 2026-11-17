/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$DriveOff
void Dino_BusSand_App_UI_HomeStage__DriveOff (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$DriveOff
   void Dino_BusSand_App_UI_HomeStage__DriveOff (Dino_BusSand_App_UI_HomeStage_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__DriveOff_22ef9a0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar6 = 0;
  if ((bRam0000000004f9c40a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568,0);
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    bRam0000000004f9c40a = 1;
    uVar6 = extraout_x1;
  }
  if ((*(long *)(lVar5 + 0x18) == 0) || (*(int *)(lVar5 + 0x50) == 3)) {
    return;
  }
  *(undefined4 *)(lVar5 + 0x58) = 0;
  *(undefined4 *)(lVar5 + 0x50) = 2;
  if (*(float *)(lVar5 + 0xa8) <= 0.0) {
    auVar9 = Dino_BusSand_App_UI_HomeToonRig__get_CapAway_22f63a4(*(long *)(lVar5 + 0x18),0);
    uVar6 = auVar9._8_8_;
    if ((auVar9._0_8_ & 1) != 0) {
      if (*(long *)(lVar5 + 0x18) == 0) goto LAB_023e0c7c;
      Dino_BusSand_App_UI_HomeToonRig__CapSnap_22f62f4(*(long *)(lVar5 + 0x18),0);
      uVar6 = extraout_x1_00;
    }
  }
  puVar2 = PTR_DAT_04cad568;
  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    uVar6 = extraout_x1_01;
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568,uVar6);
    cRam0000000004f9b94e = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar2;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    Dino_BusSand_GameAudio__Vroom_2385770(_UNK_00e200fc,**(long **)(lVar4 + 0xb8),0);
  }
  Dino_BusSand_App_UI_HomeBus__Burst_22e0c84(lVar5,4);
  puVar2 = PTR_DAT_04cb71e8;
  lVar8 = *(long *)(lVar5 + 0x20);
  *(undefined4 *)(lVar5 + 0x98) = 0xbf800000;
  lVar4 = FUN_02133068(*(undefined8 *)puVar2,2);
  puVar2 = PTR_DAT_04cb7200;
  lVar7 = *(long *)PTR_DAT_04cb7200;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
    lVar7 = *(long *)puVar2;
  }
  puVar3 = PTR_DAT_04cb71f0;
  lVar7 = *(long *)(lVar7 + 0xb8);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = *(undefined8 *)(lVar7 + 0x70);
  uStack_90 = *(undefined8 *)(lVar7 + 0x68);
  uStack_68 = 0;
  uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)(lVar7 + 0x78));
  System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
            (_UNK_00e201f0,&uStack_78,&uStack_90,*(undefined8 *)PTR_DAT_04cb71f0);
  if (lVar4 == 0) {
LAB_023e0c7c:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x30) = uStack_68;
    *(undefined8 *)(lVar4 + 0x28) = uStack_70;
    *(undefined8 *)(lVar4 + 0x20) = uStack_78;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
    uStack_58 = *(undefined8 *)(lVar7 + 0x98);
    uStack_60 = *(undefined8 *)(lVar7 + 0x90);
    uStack_50 = *(undefined4 *)(lVar7 + 0xa0);
    System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
              (0x40400000,&uStack_90,&uStack_60,*(undefined8 *)puVar3);
    if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar4 + 0x48) = uStack_80;
      *(undefined8 *)(lVar4 + 0x40) = uStack_88;
      *(undefined8 *)(lVar4 + 0x38) = uStack_90;
      if (lVar8 != 0) {
        Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar8,lVar4,0);
        if (*(long *)(lVar5 + 0x20) != 0) {
          Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                    (0,_UNK_00e20328,0x40400000,*(long *)(lVar5 + 0x20),0);
          uVar1 = _UNK_00e20414;
          if (*(long *)(lVar5 + 0x18) != 0) {
            Dino_BusSand_App_UI_HomeToonRig__WheelHop_22f5970
                      (_UNK_00e20414,*(long *)(lVar5 + 0x18),0,0);
            if (*(long *)(lVar5 + 0x18) != 0) {
              Dino_BusSand_App_UI_HomeToonRig__WheelHop_22f5970(uVar1,*(long *)(lVar5 + 0x18),1,0);
              *(undefined4 *)(lVar5 + 0xd0) = *(undefined4 *)(lVar5 + 0x88);
              return;
            }
          }
        }
      }
      goto LAB_023e0c7c;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}


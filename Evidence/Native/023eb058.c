/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Enter
void Dino_BusSand_App_UI_HomeStage__Enter (Dino_BusSand_App_UI_HomeStage_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x023e0844) */
/* WARNING: Removing unreachable block (ram,0x023e086c) */
/* WARNING: Removing unreachable block (ram,0x023e0878) */
/* WARNING: Removing unreachable block (ram,0x023e08b8) */
/* WARNING: Removing unreachable block (ram,0x023e08c0) */
/* WARNING: Removing unreachable block (ram,0x023e0914) */
/* WARNING: Removing unreachable block (ram,0x023e0928) */
/* WARNING: Removing unreachable block (ram,0x023e0970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Enter
   void Dino_BusSand_App_UI_HomeStage__Enter (Dino_BusSand_App_UI_HomeStage_o* __this, float delay,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__Enter_22eb058(float param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  puVar1 = PTR_DAT_04cb74a8;
  if ((bRam0000000004f9c45e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb74a8);
    bRam0000000004f9c45e = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  bVar2 = Dino_BusSand_App_UI_HomeStage__get_LoadingUp_22ef734();
  lVar4 = *(long *)(param_2 + 0x78);
  *(byte *)(param_2 + 0xb0) = bVar2 & 1;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar5 = 0;
  fVar8 = 1000.0;
  if ((bVar2 & 1) == 0) {
    fVar8 = param_1;
  }
  if (*(long *)(lVar4 + 0x18) == 0) {
    return;
  }
  *(undefined4 *)(lVar4 + 0x5c) = 0x3f800000;
  *(undefined4 *)(lVar4 + 0x44) = 0;
  *(undefined4 *)(lVar4 + 0x48) = 0;
  *(undefined4 *)(lVar4 + 0x50) = 1;
  fVar7 = *(float *)(lVar4 + 0x4c) + -22.0;
  *(undefined1 *)(lVar4 + 0xfc) = 0;
  *(undefined4 *)(lVar4 + 0x54) = 0xc1b00000;
  *(float *)(lVar4 + 0x58) = -fVar8;
  *(undefined1 *)(lVar4 + 0xcc) = 0;
  *(float *)(lVar4 + 0x40) = fVar7;
  if (*(long *)(lVar4 + 0x10) != 0) {
    UnityEngine_Transform__set_localPosition_43cfda8(fVar7,0,0,*(long *)(lVar4 + 0x10),0);
    uVar5 = extraout_x1;
    if (*(long *)(lVar4 + 0x10) != 0) {
      auVar9 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar4 + 0x10),0);
      uVar5 = auVar9._8_8_;
      if (auVar9._0_8_ != 0) {
        UnityEngine_GameObject__SetActive_43c1408(auVar9._0_8_,1,0);
        if (*(float *)(lVar4 + 0xa8) <= 0.0) {
          uVar5 = extraout_x1_00;
          if (*(long *)(lVar4 + 0x18) == 0) goto LAB_023e0744;
          auVar9 = Dino_BusSand_App_UI_HomeToonRig__get_CapAway_22f63a4(*(long *)(lVar4 + 0x18),0);
          uVar5 = auVar9._8_8_;
          if ((auVar9._0_8_ & 1) != 0) {
            if (*(long *)(lVar4 + 0x18) == 0) goto LAB_023e0744;
            Dino_BusSand_App_UI_HomeToonRig__CapSnap_22f62f4(*(long *)(lVar4 + 0x18),0);
          }
        }
        if ((bRam0000000004f9c414 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb7200);
          FUN_02132f7c(PTR_DAT_04cb71e8);
          FUN_02132f7c(PTR_DAT_04cb71f0);
          bRam0000000004f9c414 = 1;
        }
        puVar1 = PTR_DAT_04cb7200;
        lVar6 = *(long *)(lVar4 + 0x20);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0xb8) = 1;
          lVar3 = *(long *)puVar1;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar3 = *(long *)puVar1;
          }
          lVar3 = *(long *)(lVar3 + 0xb8);
          uStack_68 = *(undefined8 *)(lVar3 + 0x48);
          uStack_70 = *(undefined8 *)(lVar3 + 0x40);
          uStack_60 = *(undefined4 *)(lVar3 + 0x50);
          Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar6,&uStack_70,0);
          lVar6 = *(long *)(lVar4 + 0x20);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          if (lVar6 != 0) {
            Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                      (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],_UNK_00e20754,lVar6,0
                      );
            *(undefined1 *)(lVar4 + 0xe0) = 0;
            fVar7 = *(float *)(lVar4 + 0x88) + 4.0;
            fVar8 = *(float *)(lVar4 + 0xd4);
            if (*(float *)(lVar4 + 0xd4) <= fVar7) {
              fVar8 = fVar7;
            }
            *(float *)(lVar4 + 0xd0) = *(float *)(lVar4 + 0x88);
            *(float *)(lVar4 + 0xd4) = fVar8;
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
  }
LAB_023e0744:
                    /* WARNING: Subroutine does not return */
  FUN_02133224(0,uVar5);
}


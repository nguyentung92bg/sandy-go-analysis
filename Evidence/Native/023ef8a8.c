/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Offstage
void Dino_BusSand_App_UI_HomeStage__Offstage (Dino_BusSand_App_UI_HomeStage_o* __this, const MethodInfo* method);
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
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Offstage
   void Dino_BusSand_App_UI_HomeStage__Offstage (Dino_BusSand_App_UI_HomeStage_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__Offstage_22ef8a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar4 = 0;
  if (*(long *)(lVar3 + 0x18) == 0) {
    return;
  }
  *(undefined4 *)(lVar3 + 0x5c) = 0x3f800000;
  *(undefined4 *)(lVar3 + 0x44) = 0;
  *(undefined4 *)(lVar3 + 0x48) = 0;
  *(undefined4 *)(lVar3 + 0x50) = 1;
  fVar6 = *(float *)(lVar3 + 0x4c) + -22.0;
  *(undefined1 *)(lVar3 + 0xfc) = 0;
  *(undefined4 *)(lVar3 + 0x54) = 0xc1b00000;
  *(undefined4 *)(lVar3 + 0x58) = 0xc47a0000;
  *(undefined1 *)(lVar3 + 0xcc) = 0;
  *(float *)(lVar3 + 0x40) = fVar6;
  if (*(long *)(lVar3 + 0x10) != 0) {
    UnityEngine_Transform__set_localPosition_43cfda8(fVar6,0,0,*(long *)(lVar3 + 0x10),0);
    uVar4 = extraout_x1;
    if (*(long *)(lVar3 + 0x10) != 0) {
      auVar8 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar3 + 0x10),0);
      uVar4 = auVar8._8_8_;
      if (auVar8._0_8_ != 0) {
        UnityEngine_GameObject__SetActive_43c1408(auVar8._0_8_,1,0);
        if (*(float *)(lVar3 + 0xa8) <= 0.0) {
          uVar4 = extraout_x1_00;
          if (*(long *)(lVar3 + 0x18) == 0) goto LAB_023e0744;
          auVar8 = Dino_BusSand_App_UI_HomeToonRig__get_CapAway_22f63a4(*(long *)(lVar3 + 0x18),0);
          uVar4 = auVar8._8_8_;
          if ((auVar8._0_8_ & 1) != 0) {
            if (*(long *)(lVar3 + 0x18) == 0) goto LAB_023e0744;
            Dino_BusSand_App_UI_HomeToonRig__CapSnap_22f62f4(*(long *)(lVar3 + 0x18),0);
          }
        }
        if ((bRam0000000004f9c414 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cb7200);
          FUN_02132f7c(PTR_DAT_04cb71e8);
          FUN_02132f7c(PTR_DAT_04cb71f0);
          bRam0000000004f9c414 = 1;
        }
        puVar1 = PTR_DAT_04cb7200;
        lVar5 = *(long *)(lVar3 + 0x20);
        if (lVar5 != 0) {
          *(undefined1 *)(lVar5 + 0xb8) = 1;
          lVar2 = *(long *)puVar1;
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar2 = *(long *)puVar1;
          }
          lVar2 = *(long *)(lVar2 + 0xb8);
          uStack_68 = *(undefined8 *)(lVar2 + 0x48);
          uStack_70 = *(undefined8 *)(lVar2 + 0x40);
          uStack_60 = *(undefined4 *)(lVar2 + 0x50);
          Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar5,&uStack_70,0);
          lVar5 = *(long *)(lVar3 + 0x20);
          if (cRam0000000004f9b948 == '\0') {
            FUN_02132f7c(PTR_DAT_04cacfc0);
            cRam0000000004f9b948 = '\x01';
          }
          if (lVar5 != 0) {
            Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                      (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                       (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],_UNK_00e20754,lVar5,0
                      );
            *(undefined1 *)(lVar3 + 0xe0) = 0;
            fVar7 = *(float *)(lVar3 + 0x88) + 4.0;
            fVar6 = *(float *)(lVar3 + 0xd4);
            if (*(float *)(lVar3 + 0xd4) <= fVar7) {
              fVar6 = fVar7;
            }
            *(float *)(lVar3 + 0xd0) = *(float *)(lVar3 + 0x88);
            *(float *)(lVar3 + 0xd4) = fVar6;
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
  FUN_02133224(0,uVar4);
}


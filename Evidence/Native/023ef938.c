/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Buck
void Dino_BusSand_App_UI_HomeStage__Buck (Dino_BusSand_App_UI_HomeStage_o* __this, float strength, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeStage$$Buck
   void Dino_BusSand_App_UI_HomeStage__Buck (Dino_BusSand_App_UI_HomeStage_o* __this, float
   strength, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeStage__Buck_22ef938(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  lVar6 = *(long *)(param_2 + 0x78);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c40f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7200,0);
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04cb6890);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    bRam0000000004f9c40f = 1;
  }
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (*(long *)(lVar6 + 0x18) == 0) {
    return;
  }
  Dino_BusSand_App_UI_HomeToonRig__Hop_22f5924(param_1 * _UNK_00e208cc,*(long *)(lVar6 + 0x18),0);
  puVar3 = PTR_DAT_04cb7200;
  puVar2 = PTR_DAT_04cb71f0;
  puVar1 = PTR_DAT_04cb71e8;
  if (*(long *)(lVar6 + 0x18) != 0) {
    Dino_BusSand_App_UI_HomeToonRig__Kick_22f5958(param_1 * 0.25,*(long *)(lVar6 + 0x18),0);
    uVar4 = *(undefined8 *)puVar1;
    lVar8 = *(long *)(lVar6 + 0x20);
    *(float *)(lVar6 + 100) = *(float *)(lVar6 + 100) + param_1 * -30.0;
    lVar5 = FUN_02133068(uVar4,2);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
      lVar7 = *(long *)puVar3;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_98 = *(undefined8 *)(lVar7 + 0x84);
    uStack_a0 = *(undefined8 *)(lVar7 + 0x7c);
    uStack_78 = 0;
    uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(lVar7 + 0x8c));
    System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
              (_UNK_00e207cc,&uStack_88,&uStack_a0,*(undefined8 *)puVar2);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        *(undefined8 *)(lVar5 + 0x30) = uStack_78;
        *(undefined8 *)(lVar5 + 0x28) = uStack_80;
        *(undefined8 *)(lVar5 + 0x20) = uStack_88;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        lVar7 = *(long *)(*(long *)puVar3 + 0xb8);
        uStack_58 = *(undefined8 *)(lVar7 + 0xac);
        uStack_60 = *(undefined8 *)(lVar7 + 0xa4);
        uStack_50 = *(undefined4 *)(lVar7 + 0xb4);
        System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                  (_UNK_00e20178,&uStack_a0,&uStack_60,*(undefined8 *)puVar2);
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar5 + 0x48) = uStack_90;
          *(undefined8 *)(lVar5 + 0x40) = uStack_98;
          *(undefined8 *)(lVar5 + 0x38) = uStack_a0;
          if (lVar8 != 0) {
            Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar8,lVar5,0);
            auStack_70 = Dino_BusSand_App_UI_HomeBus__Spot_22e219c(lVar6,1);
            if ((auStack_70._0_8_ & 0xff) != 0) {
              lVar5 = *(long *)(lVar6 + 0x20);
              System_Nullable_Vector3___get_Value_2bd0e68
                        (auStack_70,*(undefined8 *)PTR_DAT_04cb6890);
              if (lVar5 == 0) goto LAB_023e2194;
              Dino_BusSand_App_UI_HomeToonFace__LookAt_22e500c(lVar5,0);
            }
            *(undefined4 *)(lVar6 + 0xd0) = *(undefined4 *)(lVar6 + 0x88);
            return;
          }
          goto LAB_023e2194;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_023e2194:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


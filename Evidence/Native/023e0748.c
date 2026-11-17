/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Wake
void Dino_BusSand_App_UI_HomeBus__Wake (Dino_BusSand_App_UI_HomeBus_o* __this, bool startled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Wake
   void Dino_BusSand_App_UI_HomeBus__Wake (Dino_BusSand_App_UI_HomeBus_o* __this, bool startled,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Wake_22e0748(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  if ((bRam0000000004f9c414 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb7200);
    FUN_02132f7c(PTR_DAT_04cb71e8);
    FUN_02132f7c(PTR_DAT_04cb71f0);
    bRam0000000004f9c414 = 1;
  }
  puVar2 = PTR_DAT_04cb7200;
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0xb8) = 1;
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar2;
    }
    lVar3 = *(long *)(lVar3 + 0xb8);
    uStack_68 = *(undefined8 *)(lVar3 + 0x48);
    uStack_70 = *(undefined8 *)(lVar3 + 0x40);
    uStack_60 = *(undefined4 *)(lVar3 + 0x50);
    Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar5,&uStack_70,0);
    lVar5 = *(long *)(param_1 + 0x20);
    if (cRam0000000004f9b948 == '\0') {
      FUN_02132f7c(PTR_DAT_04cacfc0);
      cRam0000000004f9b948 = '\x01';
    }
    if (lVar5 != 0) {
      Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                 (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],_UNK_00e20754,lVar5,0);
      if ((*(char *)(param_1 + 0xe0) == '\0') || ((param_2 & 1) == 0)) {
LAB_023e0938:
        *(undefined1 *)(param_1 + 0xe0) = 0;
        fVar6 = *(float *)(param_1 + 0x88) + 4.0;
        fVar7 = *(float *)(param_1 + 0xd4);
        if (*(float *)(param_1 + 0xd4) <= fVar6) {
          fVar7 = fVar6;
        }
        *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0x88);
        *(float *)(param_1 + 0xd4) = fVar7;
        return;
      }
      lVar4 = *(long *)(param_1 + 0x20);
      lVar5 = FUN_02133068(*(undefined8 *)PTR_DAT_04cb71e8,2);
      lVar3 = *(long *)puVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar3);
        lVar3 = *(long *)puVar2;
      }
      puVar1 = PTR_DAT_04cb71f0;
      lVar3 = *(long *)(lVar3 + 0xb8);
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_98 = *(undefined8 *)(lVar3 + 0x84);
      uStack_a0 = *(undefined8 *)(lVar3 + 0x7c);
      uStack_78 = 0;
      uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(lVar3 + 0x8c));
      System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                (_UNK_00e208d0,&uStack_88,&uStack_a0,*(undefined8 *)PTR_DAT_04cb71f0);
      if (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined8 *)(lVar5 + 0x30) = uStack_78;
          *(undefined8 *)(lVar5 + 0x28) = uStack_80;
          *(undefined8 *)(lVar5 + 0x20) = uStack_88;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          lVar3 = *(long *)(*(long *)puVar2 + 0xb8);
          uStack_48 = *(undefined8 *)(lVar3 + 0x5c);
          uStack_50 = *(undefined8 *)(lVar3 + 0x54);
          uStack_40 = *(undefined4 *)(lVar3 + 100);
          System_ValueTuple_HomeToonFace_Pose__float____ctor_30fa92c
                    (_UNK_00e20994,&uStack_a0,&uStack_50,*(undefined8 *)puVar1);
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar5 + 0x48) = uStack_90;
            *(undefined8 *)(lVar5 + 0x40) = uStack_98;
            *(undefined8 *)(lVar5 + 0x38) = uStack_a0;
            if (lVar4 != 0) {
              Dino_BusSand_App_UI_HomeToonFace__Play_22f2048(lVar4,lVar5,0);
              goto LAB_023e0938;
            }
            goto LAB_023e096c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
    }
  }
LAB_023e096c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


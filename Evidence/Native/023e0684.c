/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Arrive
void Dino_BusSand_App_UI_HomeBus__Arrive (Dino_BusSand_App_UI_HomeBus_o* __this, float back, float seconds, float delay, const MethodInfo* method);
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
/* IL2CPP: Dino.BusSand.App.UI.HomeBus$$Arrive
   void Dino_BusSand_App_UI_HomeBus__Arrive (Dino_BusSand_App_UI_HomeBus_o* __this, float back,
   float seconds, float delay, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeBus__Arrive_22e0684
               (float param_1,undefined4 param_2,float param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if (*(long *)(param_4 + 0x18) == 0) {
    return;
  }
  *(undefined4 *)(param_4 + 0x5c) = param_2;
  *(undefined4 *)(param_4 + 0x44) = 0;
  *(undefined4 *)(param_4 + 0x48) = 0;
  *(undefined4 *)(param_4 + 0x50) = 1;
  fVar5 = *(float *)(param_4 + 0x4c) + param_1;
  *(undefined1 *)(param_4 + 0xfc) = 0;
  *(float *)(param_4 + 0x54) = param_1;
  *(float *)(param_4 + 0x58) = -param_3;
  *(undefined1 *)(param_4 + 0xcc) = 0;
  *(float *)(param_4 + 0x40) = fVar5;
  if (*(long *)(param_4 + 0x10) != 0) {
    UnityEngine_Transform__set_localPosition_43cfda8(fVar5,0,0,*(long *)(param_4 + 0x10),0);
    if ((*(long *)(param_4 + 0x10) != 0) &&
       (lVar2 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_4 + 0x10),0),
       lVar2 != 0)) {
      UnityEngine_GameObject__SetActive_43c1408(lVar2,1,0);
      if (*(float *)(param_4 + 0xa8) <= 0.0) {
        if (*(long *)(param_4 + 0x18) == 0) goto LAB_023e0744;
        uVar3 = Dino_BusSand_App_UI_HomeToonRig__get_CapAway_22f63a4(*(long *)(param_4 + 0x18),0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_4 + 0x18) == 0) goto LAB_023e0744;
          Dino_BusSand_App_UI_HomeToonRig__CapSnap_22f62f4(*(long *)(param_4 + 0x18),0);
        }
      }
      if ((bRam0000000004f9c414 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb7200);
        FUN_02132f7c(PTR_DAT_04cb71e8);
        FUN_02132f7c(PTR_DAT_04cb71f0);
        bRam0000000004f9c414 = 1;
      }
      puVar1 = PTR_DAT_04cb7200;
      lVar2 = *(long *)(param_4 + 0x20);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0xb8) = 1;
        lVar4 = *(long *)puVar1;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar4 = *(long *)puVar1;
        }
        lVar4 = *(long *)(lVar4 + 0xb8);
        uStack_68 = *(undefined8 *)(lVar4 + 0x48);
        uStack_70 = *(undefined8 *)(lVar4 + 0x40);
        uStack_60 = *(undefined4 *)(lVar4 + 0x50);
        Dino_BusSand_App_UI_HomeToonFace__Mood_22f1fc0(lVar2,&uStack_70,0);
        lVar2 = *(long *)(param_4 + 0x20);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        if (lVar2 != 0) {
          Dino_BusSand_App_UI_HomeToonFace__Glance_22e5200
                    (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                     (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],_UNK_00e20754,lVar2,0);
          *(undefined1 *)(param_4 + 0xe0) = 0;
          fVar6 = *(float *)(param_4 + 0x88) + 4.0;
          fVar5 = *(float *)(param_4 + 0xd4);
          if (*(float *)(param_4 + 0xd4) <= fVar6) {
            fVar5 = fVar6;
          }
          *(float *)(param_4 + 0xd0) = *(float *)(param_4 + 0x88);
          *(float *)(param_4 + 0xd4) = fVar5;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
LAB_023e0744:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


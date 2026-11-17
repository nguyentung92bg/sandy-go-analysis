/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$UiNamed
void Dino_BusSand_App_Meta_JourneyTracking__UiNamed (int32_t op, System_String_o* a, System_String_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$UiNamed
   void Dino_BusSand_App_Meta_JourneyTracking__UiNamed (int32_t op, System_String_o* a,
   System_String_o* b, const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__UiNamed_221d1c8
               (int param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  double dVar8;
  
  puVar3 = PTR_DAT_04caba90;
  if ((bRam0000000004f9bda7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bda7 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_App_Meta_JourneyTracking__get_UiOn_221d814();
  if (((uVar5 & 1) != 0) &&
     (uVar5 = System_String__IsNullOrEmpty_46d2084(param_2,0), (uVar5 & 1) == 0)) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar8 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    lVar1 = -0x8000000000000000;
    if (dVar8 * _UNK_00e6a6f0 != INFINITY) {
      lVar1 = (long)(dVar8 * _UNK_00e6a6f0);
    }
    bVar4 = true;
    do {
      bVar7 = bVar4;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_JourneyTracking__EnsureUi_221d8dc();
      lVar6 = *(long *)puVar3;
      iVar2 = *(int *)(lVar6 + 0xe4);
      if (param_1 == 0) {
        if (iVar2 == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) goto LAB_0231d39c;
        uVar5 = Dino_BusSand_App_Meta_Journey_UiJourney__Open_229a538(lVar6,lVar1,param_2,0);
      }
      else if (param_1 == 1) {
        if (iVar2 == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) goto LAB_0231d39c;
        uVar5 = Dino_BusSand_App_Meta_Journey_UiJourney__Close_229a64c(lVar6,lVar1,param_2,0);
      }
      else if (param_1 == 2) {
        if (iVar2 == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) goto LAB_0231d39c;
        uVar5 = Dino_BusSand_App_Meta_Journey_UiJourney__Click_229a65c
                          (lVar6,lVar1,param_2,param_3,0);
      }
      else {
        if (iVar2 == 0) {
          thunk_FUN_0218fdac();
          lVar6 = *(long *)puVar3;
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
        if (lVar6 == 0) {
LAB_0231d39c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar5 = Dino_BusSand_App_Meta_Journey_UiJourney__Back_229a66c(lVar6,lVar1,param_2,0);
      }
      if ((uVar5 & 1) != 0) {
        return;
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_JourneyTracking__FlushUi_221dac8(1);
      bVar4 = false;
    } while (bVar7);
  }
  return;
}


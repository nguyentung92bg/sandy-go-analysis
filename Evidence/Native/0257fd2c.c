/* IL2CPP: Dino.Tracking.TrackingService$$ForwardProperty
void Dino_Tracking_TrackingService__ForwardProperty (Dino_Tracking_TrackingService_o* __this, System_String_o* propertyName, Il2CppObject* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingService$$ForwardProperty
   void Dino_Tracking_TrackingService__ForwardProperty (Dino_Tracking_TrackingService_o* __this,
   System_String_o* propertyName, Il2CppObject* value, const MethodInfo* method); */

void Dino_Tracking_TrackingService__ForwardProperty_247fd2c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  
  if ((bRam0000000004f9cf95 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf428);
    bRam0000000004f9cf95 = 1;
  }
  puVar2 = PTR_DAT_04cbf428;
  plVar8 = *(long **)(param_1 + 0x28);
  if (plVar8 != (long *)0x0) {
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04cbf428) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_0257fdc8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)PTR_DAT_04cbf428,3);
LAB_0257fdc8:
    (*(code *)*puVar3)(plVar8,param_2,param_3,puVar3[1]);
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (0 < (int)uVar1) {
        uVar9 = 0;
        do {
          if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          plVar8 = *(long **)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
          if (plVar8 == (long *)0x0) goto LAB_0257fe90;
          lVar5 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
                goto LAB_0257fe58;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_0216b7a4(plVar8,*(long *)puVar2,3);
LAB_0257fe58:
          (*(code *)*puVar3)(plVar8,param_2,param_3,puVar3[1]);
          uVar1 = *(uint *)(lVar4 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar1);
      }
      return;
    }
  }
LAB_0257fe90:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}


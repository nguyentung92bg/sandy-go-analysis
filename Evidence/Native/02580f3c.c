/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackUaNetwork
void Dino_Tracking_DinoUserPropertyTracking__TrackUaNetwork (System_String_o* network, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$TrackUaNetwork
   void Dino_Tracking_DinoUserPropertyTracking__TrackUaNetwork (System_String_o* network, const
   MethodInfo* method); */

void Dino_Tracking_DinoUserPropertyTracking__TrackUaNetwork_2480f3c(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long *plStack_28;
  
  puVar1 = PTR_DAT_04cb4a90;
  if ((bRam0000000004f9cfa6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb4a90);
    bRam0000000004f9cfa6 = 1;
  }
  uVar5 = *(undefined8 *)puVar1;
  if ((bRam0000000004f9cfb9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caabc8);
    bRam0000000004f9cfb9 = 1;
  }
  plStack_28 = (long *)0x0;
  uVar3 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  plVar2 = plStack_28;
  if ((uVar3 & 1) != 0) {
    if (plStack_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar6 = *plStack_28;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caabc8) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_02580ecc;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_0216b7a4(plStack_28,*(long *)PTR_DAT_04caabc8,3);
LAB_02580ecc:
    (*(code *)*puVar4)(plVar2,uVar5,param_1,puVar4[1]);
  }
  return;
}


/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$SetProperty
void Dino_Tracking_DinoUserPropertyTracking__SetProperty (System_String_o* propertyName, Il2CppObject* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoUserPropertyTracking$$SetProperty
   void Dino_Tracking_DinoUserPropertyTracking__SetProperty (System_String_o* propertyName,
   Il2CppObject* value, const MethodInfo* method); */

void Dino_Tracking_DinoUserPropertyTracking__SetProperty_2480e28
               (undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plStack_28;
  
  if ((bRam0000000004f9cfb9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caabc8);
    bRam0000000004f9cfb9 = 1;
  }
  plStack_28 = (long *)0x0;
  uVar2 = Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(&plStack_28);
  plVar1 = plStack_28;
  if ((uVar2 & 1) != 0) {
    if (plStack_28 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = *plStack_28;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_04caabc8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
          goto LAB_02580ecc;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0216b7a4(plStack_28,*(long *)PTR_DAT_04caabc8,3);
LAB_02580ecc:
    (*(code *)*puVar3)(plVar1,param_1,param_2,puVar3[1]);
  }
  return;
}

